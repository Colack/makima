#include "../ime.h"

char ERROR_sendError(char *message, bool exit, int exitStatus);
char ERROR_sendMultipleErrors(int amount, char message, bool exit, int exitStatus);

char ERROR_ouputErrorToFile(char fileName);
char ERROR_readErrorFromFile(char fileName);
bool ERROR_errorFileExists(char fileName);
bool ERROR_deleteErrorFile(char fileName);