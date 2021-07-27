package tbox.language.frontend;

import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CommonTokenStream;

import java.io.IOException;

public class TBoxMain {
    public static void run(String file_name) throws IOException {
        TBoxLexer lexer = new TBoxLexer(CharStreams.fromFileName(file_name));
        CommonTokenStream tokens = new CommonTokenStream(lexer);
        TBoxParser parser = new TBoxParser(tokens);
        parser.stat();
    }

    public static void main(String[] args) {
        try {
            run(args[0]);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}