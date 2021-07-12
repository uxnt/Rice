#ifndef __HEADER_REGEXUTIL__
#define __HEADER_REGEXUTIL__

#include <vector>
#include <string>
#include <iostream>

namespace TBox {
    namespace Util {
        namespace Regex {
            enum class Type {
                EMPTY = 0,
                START,
                LETTER,
                OPERATOR,
                BRACKET,
                FACTOR,
                EXPR,
                END
            };
            struct ASTNode {
                std::vector<ASTNode*> children;
                Type type;
                char value;
                ASTNode(Type type, char value);
                ~ASTNode();
                ASTNode& addChild(ASTNode* node);
            };
            void genRegexAST(std::string regex, ASTNode& root);
        }
    }
}

#endif