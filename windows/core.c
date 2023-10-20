#include "ime.h" // All library headers and definitions.
#include "lib.h" // Functions and Declarations for the main program.
#include "error.h" // *NOT IMPLEMENTED YET* Variables and Functions relating to error handling.
#include "lib/hash.h" // Hashing functions.
#include "lib/util.h" // Utility functions.

/*
  * Introducing Makima, or Maintain And Keeping IT Maintenance Active *
  
  All of the libraries and code are designed to run for windows.
  Note that if you are going to be porting Makima to another platform you will encounter compatability errors.

  Thanks,
  - Jack Spencer
*/

int main(bool isDebug, bool enterHash) {
  if (enterHash) {
    // Get input from user.
    char hashInput[100];

    printf("Enter String to Hash: > ");
    fgets(hashInput, sizeof(hashInput), stdin);
    UTIL_returnAsLowercase(hashInput);
    removeNewLine(hashInput);

    // Hash the input.
    uint32_t hash = HASH_hashInput(hashInput);

    // Print the hash.

    printf("Hash: %d\n", hash);
  }

  printf("Makima Version %s\n", MAKIMA_VERSION);
  printf("by %s\n", MAKIMA_AUTHOR);
  printf("Licensed under %s\n", MAKIMA_LICENSE);

  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
  WORD saved_attributes;

  GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
  saved_attributes = consoleInfo.wAttributes;

  printStartMenu(true, true, hConsole, saved_attributes);

  char stringInput[100];

  while (1) {
    printf("> ");
    fgets(stringInput, sizeof(stringInput), stdin);
    removeNewLine(stringInput);
    getMakimaCommand(stringInput, hConsole, saved_attributes);
  }

  SetConsoleTextAttribute(hConsole, saved_attributes);

  return 0;
}

// Path: windows/core.c