#include "lib/includes.h"
#include "lib/hash.h"
#include "lib/util.h"
#include "lib/makima.h"
#include "lib/error.h"

int main(bool hashEnabled) {
    if (hashEnabled) {
        char hashInput[100];

        printf("\n-- String Hash Mode --\n");
        printf("Enter a String to Hash: ");
        
        fgets(hashInput, sizeof(hashInput), stdin);
        UTIL_removeNewLine(hashInput);
        UTIL_returnAsLowercase(hashInput);

        HASH_hashInput(hashInput);

        printf("Hashed String: %s\n", hashInput);
    } else {
        printf("\n-- String Hash Mode --\n");
        printf("String Hashing is Disabled\n");

        printf("\n-- Makima V%s --\n", MAKIMA_VERSION);
        printf("By %s\n", MAKIMA_AUTHOR);
        printf("Licensed under %s\n", MAKIMA_LICENSE);

        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
        WORD saved_attributes;

        GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
        saved_attributes = consoleInfo.wAttributes;

        MAKIMA_getCommandInput(hConsole, saved_attributes);

        return 0;
    }
}