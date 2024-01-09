#include "util.h"

char UTIL_returnAsLowercase(char string) {
    return toLower(string);
}

char UTIL_removeNewLine(char string) {
    size_t length = strlen(string);
    if (length > 0 && string[length - 1] == '\n') {
        string[length - 1] = '\0';
    }

    return string;
}