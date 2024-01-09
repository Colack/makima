#include "core.h"

void core_printStart() {
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
    printf("  ############ ###### ## ## # ######    Makima V%s\n", COM_WATERMELONKATANA_VERSION);
    printf("  #####   ####      ######### # ###     Monitor And Keeping IT Maintenance Active\n");
    printf(" # ## #              # ### ## ## #      License: %s\n", COM_WATERMELONKATANA_LICENSE);
    printf(" # ## #            #  ##   ###  ##      Author: %s\n", COM_WATERMELONKATANA_AUTHOR);
    printf("   ## #     ##             ### ##    \n");
    printf(" ##### #     #          ## # ###        Type 'help' to get a list of commands. \n");
    printf("    ##  #  ##         ##   # ##      \n"); 
    printf("    ## ###    ###    #    ####    #  \n");
    printf("   ###   ##         ##    ###  ##### \n"); 
    printf(" ### ###   ##########     # ##       \n");
    printf("   # #  ###     #    #   ## # ###### \n");
    printf("  # ###    ###         #  # ##       \n");
    printf("    ###     # #         #####        \n"); 
    printf("     ##    #####      ##  ###        \n");
    printf("      ##  ########  ##  # ###        \n"); 
    printf(" #    ##  #####  #### ###  ##      # \n");
    printf(" # ##  ## ####   ##  #  #  ## ##   # \n"); 
    printf("          ####                    \n\n\n");
}

void core_init() { 
    char commandInput[100];

    core_printStart();

    while (1) {
        char *command = core_getCommand(commandInput);
        core_executeCommand(command);
    }

    
}