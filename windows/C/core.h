#include "common.h"

void core_init(void);
void core_exit(void);
void core_printStart();
void core_printError(char *error, int code);
void core_printSuccess(char *success, int code);
void core_getCommand(char *command);
void core_executeCommand();

char *core_removeNewLine(char *string);
char *core_printCredits();
char *core_printStartMenu();
char *core_printHelpMenu();