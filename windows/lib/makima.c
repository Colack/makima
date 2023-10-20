#include "makima.h"
#include "includes.h"
#include "util.h"
#include "error.h"

char MAKIMA_printStartMenu(bool clearScreen, bool fullScreen, HANDLE consoleHandle, WORD attribute) {
        
}

void MAKIMA_getCommandInput(HANDLE consoleInput, WORD attribute) {
    char command[MAX_INPUT];

    MAKIMA_printStartMenu(true, true, consoleInput, attribute);

    while (1) {
        printf("> ");
        fgets(command, sizeof(command), stdin);
        UTIL_removeNewLine(command);
        UTIL_returnAsLowercase(command);
        
    }
}