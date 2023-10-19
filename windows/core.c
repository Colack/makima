#include "ime.h"
#include "lib.h"
#include "error.h"

int main() {
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