package tbox.language.frontend;

import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CommonTokenStream;

import java.io.IOException;

public class TBoxMain {
    public static TBoxParser.StatContext run(String file_name) throws IOException {
        TBoxLexer lexer = new TBoxLexer(CharStreams.fromFileName(file_name));
        CommonTokenStream tokens = new CommonTokenStream(lexer);
        TBoxParser parser = new TBoxParser(tokens);
        return parser.stat();
    }

    public static void main(String[] args) throws IOException {
        TBoxParser.StatContext stat = run(args[0]);
        String str = new TBoxFunctionExporter().visit(stat);
        System.out.println(str);
    }
}