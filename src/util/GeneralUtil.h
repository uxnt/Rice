#ifndef __HEADER_GENERALUTIL__
#define __HEADER_GENERALUTIL__

#include <sstream>

namespace TBox {
    namespace Util {
        extern std::stringstream GENERAL_STRING_STREAM;
        #define _GSS GENERAL_STRING_STREAM
    }
}

#endif