#include "../ime.h"

bool UTIL_createNewFile(char *fileName, char *fileExtension, bool isInDirectory, char *directory);
bool UTIL_createNewDirectory(char *directoryName);

bool UTIL_removeFile(char *filePath);
bool UTIL_removeDirectory(char *directory);

bool UTIL_renameFile(char *fileName);
bool UTIL_renameDirectory(char *directory);

bool UTIL_checkIfFileExists(char *fileName);
bool UTIL_checkIfDirectoryExists(char *directory);

bool UTIL_removeLineBreak(char *string);
bool UTIL_addLineBreak(char *string);

bool UTIL_makeApplicationFullScreen();
bool UTIL_changeApplicationResolution(char x, char y);

bool UTIL_clearConsole();

bool UTIL_setTheme();
bool UTIL_accessSettings();
bool UTIL_changeSettings();

void UTIL_MAKIMA_accessUtilityMenu();
void UTIL_MAKIMA_accessSettingsMenu();

void UTIL_debugMode();
bool UTIL_stillInDebugMode(bool *debugMode);

char UTIL_returnAsLowercase(char *string);
char UTIL_returnAsUppercase(char *string);