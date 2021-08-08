#include "./TBoxProccessCreator.h"

#include "osplatformutil.h"

#if defined(I_OS_WIN)
#include <windows.h>
#include <iostream>
#include <shellapi.h>
#include <cstring>

bool RunProgram(std::string path, std::string args) {
    std::string cmd_command = path + ".exe " + args;
    char* arg = new char[cmd_command.length() + 1];
    strcpy(arg, cmd_command.c_str());
    STARTUPINFOA si{};
    si.cb = sizeof(si);
    PROCESS_INFORMATION pi;
    if (! CreateProcessA(NULL, arg, NULL, NULL, false, CREATE_NO_WINDOW, NULL, NULL, &si, &pi)) {
        return false;
    }
    WaitForSingleObject(pi.hProcess, INFINITE);
    return true;
}

#else
#include<stdlib.h>
bool RunProgram(std::string path, std::string args) {
    system((path + " " + args).c_str());
    return true;
}
#endif