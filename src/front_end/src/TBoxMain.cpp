#include "TBoxFunctionExporter.h"
#include "TBoxCodeGenerator.h"
#include "TBoxLexer.h"
#include "TBoxParser.h"
#include "TBoxHeader.h"

using namespace tbox::language;

void app_init(void) {
    llvm::outs().enable_colors(true);
}

void app_terminate(void) {
    llvm::outs().changeColor(llvm::outs().WHITE);
    llvm::outs().enable_colors(false);
}

llvm::raw_fd_ostream& err() {
    llvm::outs().changeColor(llvm::outs().RED);
    return llvm::outs();
}

llvm::raw_fd_ostream& out() {
    llvm::outs().changeColor(llvm::outs().GREEN);
    return llvm::outs();
}

std::shared_ptr<llvm::LLVMContext> Context;
llvm::IRBuilder<>* Builder;

void llvm_init(void) {
    Context = std::make_shared<llvm::LLVMContext>();
    Builder = new llvm::IRBuilder<>(*Context);
}

void llvm_terminate(void) {
    delete Builder;
}

void InitModule(llvm::Module& mod) {
}

bool Module2Obj(llvm::Module& mod, std::string output_file) {
    llvm::AssemblyAnnotationWriter writer{};
    std::error_code EC;
    llvm::raw_fd_ostream output(output_file + ".tmp.ll", EC);
    mod.print(output, &writer);

    //You should add the tools directory to the environment path
    // RunProgram("opt", output_file + ".tmp.ll -S -O2 -o " + output_file + ".tmp.ll");
    RunProgram("llvm-as", output_file + ".tmp.ll" + " -o " + output_file + ".tmp.bc");
    RunProgram("llc", output_file + ".tmp.bc -filetype=obj -O2 -o " + output_file);
    return true;
}

int main(int argc, const char** argv) {
    llvm_init();
    app_init();
    std::vector<std::string> args(argv, argv + argc);
    if (args.size() <= 2) {
        err() << "error! too few args\n";
        app_terminate();
        return -1;
    }
    std::ifstream fin(args[1].c_str());
    antlr4::ANTLRInputStream input(fin);
    TBoxLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    TBoxParser parser(&tokens);
    auto stat = parser.stat();

    llvm::Module mod(args[1].c_str(), *Context);
    InitModule(mod);

    TBoxCodeGenerator().visitStat(&mod, stat);

    if (! Module2Obj(mod, args[2])) {
        app_terminate();
        llvm_terminate();
        return -1;
    }

    app_terminate();
    llvm_terminate();
    return 0;
}