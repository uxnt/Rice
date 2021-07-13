#include "RegexUtil.h"

namespace TBox {
    namespace Util {
        namespace Regex {
            ASTNode::ASTNode(Type type, char value) {
                this->type = type;
                this->value = value;
            }
            ASTNode::~ASTNode() {
                for (auto child : children)
                    delete child;
                children.clear();
            }
            ASTNode& ASTNode::addChild(ASTNode* node) {
                this->children.push_back(node);
                return *this;
            }

            inline bool isChOperator(char ch) {
                return ch == '|' || ch == '*';
            }

            inline char escape(char ch){
                switch (ch) {
                case 'n': return '\n';
                case 'r': return '\r';
                case 't': return '\t';
                case '\\': return '\\';
                default: return '\0';
                }
            }
            class Lexer {
                std::string regex;
                int pos;
                ASTNode* curToken;
                ASTNode* genToken() {
                    if (pos >= regex.length())
                        return (ASTNode*)0;
                #define LKAH regex[pos]
                #define NXT regex[pos ++]
                    if (isChOperator(LKAH)) {
                        return new ASTNode(Type::OPERATOR, NXT);
                    }
                    else if (LKAH == '(' || LKAH == ')') {
                        return new ASTNode(Type::BRACKET, NXT);
                    }
                    else if (LKAH == '\\') {
                        NXT;
                        return new ASTNode(Type::BRACKET, escape(NXT));
                    }
                    else if (LKAH == '$')
                        NXT;
                    return new ASTNode(Type::LETTER, NXT);
                #undef LKAH
                #undef NXT
                }
            public:
                Lexer(std::string str) {
                    this->regex = str;
                    this->pos = 0;
                    curToken = genToken();
                }
                ASTNode* peek() {
                    return curToken;
                }
                ASTNode* next() {
                    ASTNode* old = curToken;
                    curToken = genToken();
                    return old;
                }
                bool isEnd() {
                    return curToken == (ASTNode*)0;
                }
            };

            std::vector<ASTNode*> nodes;
            int cur_pos = 0;
            
            inline void genToken(Lexer& lexer) {
                ASTNode* node = lexer.next();
                nodes.push_back(node);
            }

            inline void genOpToken(Lexer& lexer) {
                ASTNode* node = lexer.peek();
                if (node->type != Type::OPERATOR)
                    node = new ASTNode(Type::OPERATOR, '&');
                else
                    lexer.next();
                nodes.push_back(node);
            }

            void _factor(Lexer& lexer);
            void _expr(Lexer& lexer);
            void _start(Lexer& lexer);

            void _factor(Lexer& lexer) {
                genToken(lexer);
                if (nodes[cur_pos]->type == Type::BRACKET) {
                    cur_pos ++;
                    std::cout << "a";
                    _start(lexer);
                    cur_pos --;
                    genToken(lexer);
                    ASTNode* fac = new ASTNode(Type::FACTOR, 'f');
                    fac->addChild(nodes[cur_pos ++]);
                    fac->addChild(nodes[cur_pos ++]);
                    fac->addChild(nodes[cur_pos]);
                    nodes.pop_back();
                    nodes.pop_back();
                    cur_pos -= 2;
                    nodes[cur_pos] = fac;
                }
                else if (nodes[cur_pos]->type == Type::LETTER) {
                    ASTNode* fac = new ASTNode(Type::FACTOR, 'f');
                    fac->addChild(nodes[cur_pos]);
                    nodes[cur_pos] = fac;
                }
            }

            void _expr(Lexer& lexer) {
                if (lexer.isEnd() || (lexer.peek()->type == Type::BRACKET && lexer.peek()->value == ')')) return;
                genOpToken(lexer);
                ASTNode* expr = new ASTNode(Type::EXPR, 'e');
                if (nodes[cur_pos+1]->type == Type::OPERATOR && nodes[cur_pos+1]->value == '*') {
                    expr->addChild(nodes[cur_pos ++]);
                    expr->addChild(nodes[cur_pos]);
                    nodes.pop_back();
                    cur_pos --;
                }
                else {
                    cur_pos += 2;
                    _factor(lexer);
                    cur_pos -= 2;
                    expr->addChild(nodes[cur_pos ++]);
                    expr->addChild(nodes[cur_pos ++]);
                    expr->addChild(nodes[cur_pos]);
                    nodes.pop_back();
                    nodes.pop_back();
                    cur_pos -= 2;
                }
                nodes[cur_pos] = expr;
                _expr(lexer);
            }

            void _start(Lexer& lexer) {
                _factor(lexer);
                ASTNode* expr = new ASTNode(Type::EXPR, 'e');
                expr->addChild(nodes[cur_pos]);
                nodes[cur_pos] = expr;
                _expr(lexer);
            }

            void genRegexAST(std::string regex, ASTNode& root) {
                Lexer lexer(regex);
                _start(lexer);
                root.addChild(nodes[0]);
            }
        }
    }
}
/*
    S->expr
    expr->expr op factor
    factor->(expr)|letter
*/