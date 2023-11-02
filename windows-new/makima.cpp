#include "makima.h"

// A hashmap of all the commands, and their corresponding functions
std::unordered_map<std::string, char (*)(std::string, std::string &)> MAKIMA_commands;

char MAKIMA_commandHandler(std::string command, std::string &data)
{
    if (MAKIMA_commands.find(command) == MAKIMA_commands.end())
    {
        return 1;
    } 
    else 
    {
        return MAKIMA_commands[command](command, data);
    }
}

void MAKIMA_initCommands()
{
    MAKIMA_commands["createFile"] = MAKIMA_createFile;
    MAKIMA_commands["createFolder"] = MAKIMA_createFolder;
    MAKIMA_commands["deleteFile"] = MAKIMA_deleteFile;
    MAKIMA_commands["deleteFolder"] = MAKIMA_deleteFolder;
    MAKIMA_commands["readFile"] = MAKIMA_readFile;
    MAKIMA_commands["readFolder"] = MAKIMA_readFolder;
    MAKIMA_commands["writeFile"] = MAKIMA_writeFile;
    MAKIMA_commands["writeFolder"] = MAKIMA_writeFolder;
    MAKIMA_commands["copyFile"] = MAKIMA_copyFile;
    MAKIMA_commands["copyFolder"] = MAKIMA_copyFolder;
    MAKIMA_commands["moveFile"] = MAKIMA_moveFile;
    MAKIMA_commands["moveFolder"] = MAKIMA_moveFolder;
    MAKIMA_commands["renameFile"] = MAKIMA_renameFile;
    MAKIMA_commands["renameFolder"] = MAKIMA_renameFolder;
    MAKIMA_commands["readChromeBookData"] = MAKIMA_readChromeBookData;
    MAKIMA_commands["createChromeBookData"] = MAKIMA_createChromeBookData;
    MAKIMA_commands["writeChromeBookData"] = MAKIMA_writeChromeBookData;
    MAKIMA_commands["readChromeBookFolder"] = MAKIMA_readChromeBookFolder;
    MAKIMA_commands["createChromeBookFolder"] = MAKIMA_createChromeBookFolder;
    MAKIMA_commands["writeChromeBookFolder"] = MAKIMA_writeChromeBookFolder;
    MAKIMA_commands["deleteChromeBookData"] = MAKIMA_deleteChromeBookData;
    MAKIMA_commands["deleteChromeBookFolder"] = MAKIMA_deleteChromeBookFolder;
    MAKIMA_commands["copyChromeBookData"] = MAKIMA_copyChromeBookData;
    MAKIMA_commands["copyChromeBookFolder"] = MAKIMA_copyChromeBookFolder;
    MAKIMA_commands["moveChromeBookData"] = MAKIMA_moveChromeBookData;
    MAKIMA_commands["moveChromeBookFolder"] = MAKIMA_moveChromeBookFolder;
    MAKIMA_commands["renameChromeBookData"] = MAKIMA_renameChromeBookData;
    MAKIMA_commands["renameChromeBookFolder"] = MAKIMA_renameChromeBookFolder;
    MAKIMA_commands["getCredits"] = MAKIMA_getCredits;
    MAKIMA_commands["getVersion"] = MAKIMA_getVersion;
    MAKIMA_commands["getLicense"] = MAKIMA_getLicense;
    MAKIMA_commands["getAuthor"] = MAKIMA_getAuthor;
    MAKIMA_commands["help"] = MAKIMA_help;
}