#include "DFA.h"
#include <algorithm>
#include <iostream>

namespace TBox {
    namespace Lexan {
        namespace DFA {
            CharSet::CharSet() {
                for (int i = 0 ; i < 65536 ; i ++)
                    char_set[i] = i;
                for (int i = 0 ; i < 65536 ; i ++)
                    id[i] = -1;
                id_ = 0;
            }
            void CharSet::merge(wch ch1, wch ch2) {
                char_set[find(ch1)] = char_set[find(ch2)];
                if (id[find(ch1)] == -1)
                    giveID(ch1);
            }
            void CharSet::giveID(wch ch1) {
                id[find(ch1)] = id_ ++;
            }
            short CharSet::find(wch ch){
                return char_set[ch] == ch ? ch : char_set[ch] = find(char_set[ch]);
            }
            short CharSet::toID(short set) {
                if (id[set] == -1)
                    giveID(set);
                return id[set];
            }
            DFA::DFA(short sets_num, short states, short start_stateIn, CharSet& charsetIn, std::initializer_list<short> end_states) : start_state(start_stateIn), charset(charsetIn) {
                this->sets_num = sets_num;
                this->states = states;
                this->transform_matrix = new short*[states];
                for (int i = 0 ; i < states ; i ++) {
                    transform_matrix[i] = new short[sets_num];
                    for (int j = 0 ; j < sets_num ; j ++) {
                        transform_matrix[i][j] = -1;
                    }
                }
                this->end_states = end_states;
            }
            DFA::~DFA() {
                for (int i = 0 ; i < states ; i ++)
                    delete[] transform_matrix[i];
                delete[] transform_matrix;
            }
            void DFA::addTranform(short from, short to, short set) {
                transform_matrix[from][set] = to;   
            }
            short DFA::getTransform(short from, short set) {
                return transform_matrix[from][set];
            }
            void DFA::doTransform(short set) {
                cur_state = transform_matrix[cur_state][set];
            }
            int DFA::run(std::wstring program) {
                int now_pos = 0;
                while (true) {
                    if (std::find(end_states.begin(), end_states.end(), cur_state) != end_states.end()) {
                        if (getTransform(cur_state, charset.toID(charset.find(program[now_pos]))) == -1)
                            break;
                    }
                    if (getTransform(cur_state, charset.find(program[now_pos])) != -1)
                        doTransform(charset.find(program[now_pos ++]));
                    else
                        return -1;
                }
                return now_pos;
            }
        }
    }
}