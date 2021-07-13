#include "FileUtil.h"
#include "GeneralUtil.h"
#include <fstream>

namespace TBox {
    namespace Util {
        std::wstring File::getContent() {
            return this->content;
        }
        void File::setContent(std::wstring content) {
            this->content = content;
        }
        void File::saveContent() {
            std::wofstream fout(filename);
            fout << content;
            fout.close();
        }
        void File::load(std::string filename) {
            std::wifstream fin(filename);
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