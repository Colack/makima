// INCLUDES
#include "common.h"

// PROTOTYPES

// MAIN
int main()
{
    printf("MAKIMA v%s\n", MAKIMA_VERSION);
    printf("Author: %s\n", MAKIMA_AUTHOR);
    printf("License: %s\n", MAKIMA_LICENSE);

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);

    saved_attributes = consoleInfo.wAttributes;

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);

    SetConsoleTextAttribute(hConsole, saved_attributes);

    return 0;
}