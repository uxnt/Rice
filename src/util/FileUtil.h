#ifndef __HEADER_FILEUTIL__
#define __HEADER_FILEUTIL__

#include <string>

namespace TBox {
    namespace Util {
        struct File {
            std::wstring content;
            std::string filename;
        public:
            std::wstring getContent();
            void setContent(std::wstring content);
            void saveContent();
            void load(std::string filename);
            void reload();
            File();
            File(std::string filename);
        };
    }
}

#endif