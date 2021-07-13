#ifndef __HEADER_GENERALUTIL__
#define __HEADER_GENERALUTIL__

#include <sstream>

namespace TBox {
    typedef wchar_t wch;
    namespace Util {
        extern std::wstringstream GENERAL_STRING_STREAM;
        #define _GSS GENERAL_STRING_STREAM
    }
}

#endif