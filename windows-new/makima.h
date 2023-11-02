#ifndef MAKIMA_H
#define MAKIMA_H

#include "common.h"

#define MAKIMA_COMMANDS 20

char MAKIMA_commandHandler(std::string command, std::string &data);

char MAKIMA_createFile(std::string path, std::string content);
char MAKIMA_createFolder(std::string path);
char MAKIMA_deleteFile(std::string path);
char MAKIMA_deleteFolder(std::string path);

char MAKIMA_readFile(std::string path, std::string &data);
char MAKIMA_readFolder(std::string path, std::vector<std::string> &data);

char MAKIMA_writeFile(std::string path, std::string data);
char MAKIMA_writeFolder(std::string path, std::vector<std::string> data);

char MAKIMA_copyFile(std::string path, std::string newPath);
char MAKIMA_copyFolder(std::string path, std::string newPath);

char MAKIMA_moveFile(std::string path, std::string newPath);
char MAKIMA_moveFolder(std::string path, std::string newPath);

char MAKIMA_renameFile(std::string path, std::string newPath);
char MAKIMA_renameFolder(std::string path, std::string newPath);

// ChromeBook stuff

char MAKIMA_readChromeBookData(std::string path, std::string &data);
char MAKIMA_createChromeBookData(std::string path, std::string data);
char MAKIMA_writeChromeBookData(std::string path, std::string data);

char MAKIMA_readChromeBookFolder(std::string path, std::vector<std::string> &data);
char MAKIMA_createChromeBookFolder(std::string path, std::vector<std::string> data);
char MAKIMA_writeChromeBookFolder(std::string path, std::vector<std::string> data);

char MAKIMA_deleteChromeBookData(std::string path);
char MAKIMA_deleteChromeBookFolder(std::string path);

char MAKIMA_copyChromeBookData(std::string path, std::string newPath);
char MAKIMA_copyChromeBookFolder(std::string path, std::string newPath);

char MAKIMA_moveChromeBookData(std::string path, std::string newPath);
char MAKIMA_moveChromeBookFolder(std::string path, std::string newPath);

char MAKIMA_renameChromeBookData(std::string path, std::string newPath);
char MAKIMA_renameChromeBookFolder(std::string path, std::string newPath);

char MAKIMA_getCredits(std::string &data);
char MAKIMA_getVersion(std::string &data);
char MAKIMA_getLicense(std::string &data);
char MAKIMA_getAuthor(std::string &data);
char MAKIMA_help(std::string &data);

void MAKIMA_initCommands();

#endif