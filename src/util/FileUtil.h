#ifndef __HEADER_FILEUTIL__
#define __HEADER_FILEUTIL__

#include <string>

namespace TBox {
    namespace Util {
        struct File {
            std::string content;
            std::string filename;
        public:
            std::string getContent();
            void setContent(std::string content);
            void saveContent();
            void load(std::string filename);
            void reload();
            File();
            File(std::string filename);
        };
    }
}

#endif