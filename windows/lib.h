#include "ime.h"

void removeNewLine(char *string);
void printCredits(HANDLE consoleHandle, WORD attribute);
void printStartMenu(HANDLE consoleHandle, WORD attribute);
void printHelp(HANDLE consoleHandle, WORD attribute);
void readOldChromeBookData(HANDLE consoleHandle, WORD attribute);
void readAllChromeBookData(HANDLE consoleHandle, WORD attribute);
void enterNewChromeBookDataMode(HANDLE consoleHandle, WORD attribute);
void getMakimaCommand(char *stringInput, HANDLE consoleHandle, WORD attribute);+
bool checkIfFileExists(char *fileName);
bool checkIfDirectoryExists(char *directoryName);
void checkIfFullScreen();
void clearConsole();
bool createDirectory(char *directoryName);
bool createFile(char *fileName);

// An array full of stupid erro messages
char *errorMessages[] = {
    "If this shows up, something went wrong. :/",
    "You need to enter a command.",

}

// Path: windows/ime.h