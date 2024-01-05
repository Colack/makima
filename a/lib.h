#include "ime.h"

void removeNewLine(char *string);
void printCredits(HANDLE consoleHandle, WORD attribute);
void printStartMenu(bool clearScreen, bool fullScreen, HANDLE consoleHandle, WORD attribute);
void printHelp(HANDLE consoleHandle, WORD attribute);
void readOldChromeBookData(HANDLE consoleHandle, WORD attribute);
void readAllChromeBookData(HANDLE consoleHandle, WORD attribute);
void enterNewChromeBookDataMode(HANDLE consoleHandle, WORD attribute);
void getMakimaCommand(char *stringInput, HANDLE consoleHandle, WORD attribute);
bool checkIfFileExists(char *fileName);
bool checkIfDirectoryExists(char *directoryName);
void checkIfFullScreen();
void clearConsole();
bool createDirectory(char *directoryName);
bool createFile(char *fileName);
void printError(char *errorMessage, char *errorType, bool exitProgram, int errorCode, HANDLE consoleHandle, WORD attribute);

void MAKIMA_readOldChromeBookData(HANDLE consoleHandle, WORD attribute);
void MAKIMA_readAllChromeBookData(HANDLE consoleHandle, WORD attribute);

// TODO: Add parameters for the different requirements for chromebook information

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

void MAKIMA_credits(HANDLE consoleHandle, WORD attribute);

// Path: windows/ime.h