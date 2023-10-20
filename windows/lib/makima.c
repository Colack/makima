#include "makima.h"
#include "includes.h"
#include "util.h"
#include "error.h"
#include "hash.h"


char MAKIMA_getAsciiArt() {
    return "           ###############           \n         #####################       \n       #########################     \n      #### ######################    \n     #############################   \n    ####### # #####################  \n #  # # ### # ####### ######### ###  \n ## # ####  # # ################# ## \n ## ### ## ### ##   ##  ## #### # ## \n  # ### #    ### ### ##  #  # ###### \n  ############ ###### ## ## # ###### \n  #####   ####      ######### # ###  \n # ## #              # ### ## ## #   \n # ## #            #  ##   ###  ##   \n   ## #     ##             ### ##    \n ##### #     #          ## # ###     \n    ##  #  ##         ##   # ##      \n    ## ###    ###    #    ####    #  \n   ###   ##         ##    ###  ##### \n ### ###   ##########     # ##       \n   # #  ###     #    #   ## # ###### \n  # ###    ###         #  # ##       \n    ###     # #         #####        \n     ##    #####      ##  ###        \n      ##  ########  ##  # ###        \n #    ##  #####  #### ###  ##      # \n # ##  ## ####   ##  #  #  ## ##   # \n          ####                       \n";
}

char MAKIMA_printStartMenu(bool clearScreen, bool fullScreen, HANDLE consoleHandle, WORD attribute) {
    if (clearScreen) {
        system("cls");
    }

    if (fullScreen) {
        system("mode 650");
    }

    SetConsoleTextAttribute(consoleHandle, FOREGROUND_RED | FOREGROUND_INTENSITY);

    printf("           ###############           \n");
    printf("         #####################       \n");
    printf("       #########################     \n");
    printf("      #### ######################    \n");
    printf("     #############################   \n");
    printf("    ####### # #####################  \n");
    printf(" #  # # ### # ####### ######### ###  \n");
    printf(" ## # ####  # # ################# ## \n");
    printf(" ## ### ## ### ##   ##  ## #### # ## \n");
    printf("  # ### #    ### ### ##  #  # ###### \n");
    printf("  ############ ###### ## ## # ###### \n");
    printf("  #####   ####      ######### # ###  \n");
    printf(" # ## #              # ### ## ## #   \n");
    printf(" # ## #            #  ##   ###  ##   \n");
    printf("   ## #     ##             ### ##    \n");
    printf(" ##### #     #          ## # ###     \n");
    printf("    ##  #  ##         ##   # ##      \n"); 
    printf("    ## ###    ###    #    ####    #  \n");
    printf("   ###   ##         ##    ###  ##### \n"); 
    printf(" ### ###   ##########     # ##       \n");
    printf("   # #  ###     #    #   ## # ######      Makima v%s\n", VERSION);
    printf("  # ###    ###         #  # ##            Monitor And Keeping IT Maintenance Active\n");
    printf("    ###     # #         #####        \n"); 
    printf("     ##    #####      ##  ###             by %s\n", AUTHOR);
    printf("      ##  ########  ##  # ###        \n"); 
    printf(" #    ##  #####  #### ###  ##      #      Type 'help' to begin.\n");
    printf(" # ##  ## ####   ##  #  #  ## ##   # \n"); 
    printf("          ####                       \n\n\n");

    SetConsoleTextAttribute(consoleHandle, attribute);
}

void MAKIMA_commandManager(int hash) {

}

void MAKIMA_getCommandInput(HANDLE consoleInput, WORD attribute) {
    char command[MAX_INPUT];

    MAKIMA_printStartMenu(true, true, consoleInput, attribute);

    while (1) {
        printf("> ");
        fgets(command, sizeof(command), stdin);
        command = UTIL_removeNewLine(command);
        command = UTIL_returnAsLowercase(command);
        
        int hashedCommand = MAKIMA_translateCommandToHash(command);

        MAKIMA_commandManager(hashedCommand);
    }
}