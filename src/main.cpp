#include "./util/RegexUtil.h"
#include <iostream>

std::string regex = "a|b";
using namespace TBox::Util::Regex;

void print(ASTNode& node, int lvl = 0) {
    for(int i = 0 ; i < lvl ; i ++)
        std::cout << " ";
    std::cout << node.value << std::endl;
    for (auto c : node.children) {
        print(*c, lvl + 1);
    }
}

int main(int argc, char** argv) {
    ASTNode node(Type::START, 'S');
    genRegexAST(regex, node);
    print(node);
    return 0;
}