#include "./util/RegexUtil.h"
#include "./lexan/DFA.h"
#include <iostream>
#include <cstring>

std::string regex = "'(a|b)*";
// using namespace TBox::Util::Regex;
using namespace TBox::Lexan::DFA;

int main(int argc, char** argv) {
    // ASTNode node(Type::START, 'S');
    // genRegexAST(regex, node);
    // print(node);
    CharSet cs;
    cs.merge('b', 'a');
    cs.merge('c', 'a');
    cs.merge('d', 'a');
    cs.merge('f', 'e');
    cs.merge('g', 'e');
    cs.merge('h', 'e');
    DFA dfa(2, 3, 0, cs, {2});
    dfa.addTranform(0, 1, cs.find('a'));
    dfa.addTranform(1, 2, cs.find('e'));
    wchar_t str[10];
    mbstowcs(str, "aea", strlen("aea"));

    std::cout << dfa.run(str);
    return 0;
}