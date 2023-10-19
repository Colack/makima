#include "ime.h"
#include "lib.h"

int main() {
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
  WORD saved_attributes;

  checkIfFullScreen();
  clearConsole();

  GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
  saved_attributes = consoleInfo.wAttributes;

  printStartMenu(hConsole, saved_attributes);

  /*
  while (1) {
    char numberInputStr[10];
    printf("> ");
    fgets(numberInputStr, sizeof(numberInputStr), stdin);
    sscanf(numberInputStr, "%d", &numberInput);

    getMakimaCommand(numberInput, hConsole, saved_attributes);
  }
  */

  // We are swapping from number input to string input

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