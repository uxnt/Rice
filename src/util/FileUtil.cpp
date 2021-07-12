#include "FileUtil.h"
#include "GeneralUtil.h"
#include <fstream>

namespace TBox {
    namespace Util {
        std::string File::getContent() {
            return this->content;
        }
        void File::setContent(std::string content) {
            this->content = content;
        }
        void File::saveContent() {
            std::ofstream fout(filename);
            fout << content;
            fout.close();
        }
        void File::load(std::string filename) {
            std::ifstream fin(filename);
            _GSS << fin.rdbuf();
            setContent(_GSS.str());
            _GSS.clear();
            fin.close();
        }
        void File::reload() {
            load(filename);
        }
        File::File() {
        }
        File::File(std::string filename) {
            load(filename);
        }
    }
}