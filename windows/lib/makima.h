#include "../ime.h"

// TODO: Add parameters for the different chromebook requirements

void MAKIMA_readOldChromeBookData(HANDLE consoleHandle, WORD attribute);
void MAKIMA_readAllChromeBookData(HANDLE consoleHandle, WORD attribute);

bool MAKIMA_addNewChromeBookData(HANDLE consoleHandle, WORD attribute);
bool MAKIMA_addNewComputerData(HANDLE consoleHandle, WORD attribute);
bool MAKIMA_addNewPartUsed(HANDLE consoleHandle, WORD attribute);

bool MAKIMA_removeChromeBookData(HANDLE consoleHandle, WORD attribute);
bool MAKIMA_removeComputerData(HANDLE consoleHandle, WORD attribute);
bool MAKIMA_removeNewPartUsed(HANDLE consoleHandle, WORD attribute);

int MAKIMA_numberOfChromeBook(HANDLE consoleHandle, WORD attribute);
int MAKIMA_numberOfComputer(HANDLE consoleHandle, WORD attribute);
int MAKIMA_numberOfPartUsed(HANDLE consoleHandle, WORD attribute);

char MAKIMA_getSpecificChromeBookData(HANDLE consoleHandle, WORD attribute);
char MAKIMA_getSpecificComputerData(HANDLE consoleHandle, WORD attribute);
char MAKIMA_getSpecificPartUsed(HANDLE consoleHandle, WORD attribute);

char MAKIMA_getAllChromeBookData(HANDLE consoleHandle, WORD attribute);
char MAKIMA_getAllComputerData(HANDLE consoleHandle, WORD attribute);
char MAKIMA_getAllPartUsed(HANDLE consoleHandle, WORD attribute);

char MAKIMA_getCredits(HANDLE consoleHandle, WORD attribute);
char MAKIMA_getHelp(HANDLE consoleHandle, WORD attribute);
char MAKIMA_getHelpForSpecificCommand(char command, HANDLE consoleHandle, WORD attribute);
char MAKIMA_getAsciiArt();
char MAKIMA_printStartMenu(bool clearScreen, bool fullScreen, HANDLE consoleHandle, WORD attribute);

int MAKIMA_translateCommandToHash(char *command);
char MAKIMA_translateHashToCommand(int hash);

void MAKIMA_commandManager(char command, int hash);
void MAKIMA_getCommandInput();