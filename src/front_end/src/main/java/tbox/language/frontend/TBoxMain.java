package tbox.language.frontend;

import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CommonTokenStream;

import java.io.IOException;

public class TBoxMain {
    public static void run(String expr) {
        TBoxLexer lexer = new TBoxLexer(CharStreams.fromString(expr));
        CommonTokenStream tokens = new CommonTokenStream(lexer);
        TBoxParser parser = new TBoxParser(tokens);
        parser.r();
    }

    public static void main(String[] args) {
        String[] testStr = {
                "Hello world",
                "hello world",
                "hi world"
        };
        for (String s : testStr) {
            System.out.println("Input: " + s);
            run(s);
        }
    }
}