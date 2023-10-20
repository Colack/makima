/* 
    Takes a string as a input and returns a hash of the string.

    Author: Jack Spencer
    License: MIT
    Date: 2023-10-20
    Version: 0.0.1-Windows-Alpha
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main(char commandInput[100]) {
    uint32_t hash = 5381;
    int c;

    while ((c = *commandInput++)) {
        hash = ((hash << 5) + hash) + c;
    }

    printf("Hash: %d\n", hash);

    return 0;
}