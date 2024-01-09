#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define COM_WATERMELONKATANA_VERSION "0.0.2-Windows-Alpha"
#define COM_WATERMELONKATANA_AUTHOR "Jack Spencer"
#define COM_WATERMELONKATANA_LICENSE "MIT"
#define COM_WATERMELONKATANA_REPOSITORY "https://github.com/colack/makima"

#define MIN_INPUT 100
#define MAX_INPUT 1000

void removeNewLine(char *str);
void printCredits();
void printStartMenu();
void printHelp()
void readOldChromeBookData();
void readAllChromeBookData();
void enterNewChromeBookData();
void getMakimaCommand(char *input);

void removeNewLine(char *string) {
  size_t length = strlen(string);
  if (length > 0 && string[length - 1] == '\n') {
    string[length - 1] = '\0';
  }
}

void printCredits() {
    printf("\n\n--Credits--\n\n");
    printf("Makima V%s\n", COM_WATERMELONKATANA_VERSION);
    printf("Author: %s\n", COM_WATERMELONKATANA_AUTHOR);
    printf("License: %s\n", COM_WATERMELONKATANA_LICENSE);
    printf("Repository: %s\n", COM_WATERMELONKATANA_REPOSITORY);
    printf("\n\n");
}

void printStartMenu() {
    printf("Makima V%s\n", COM_WATERMELONKATANA_VERSION);
    printf("Type 'help' for a list of commands.\n");
}

void printHelp() {
    printf("\n\n--Help--\n\n");
    printf("help - Prints this help menu.\n");
    printf("credits - Prints the credits.\n");
    printf("exit - Exits the program.\n");
    printf("read - Reads all of the Chromebook data.\n");
    printf("read <id> - Reads the Chromebook data with the specified ID.\n");
    printf("enter - Enters new Chromebook data.\n");
    printf("enter <id> - Enters new Chromebook data with the specified ID.\n");
    printf("\n\n");
}

void readOldChromeBookData() {
    printf("\n\n--Read Old Chromebook Data--\n\n");
    printf("Enter the ID of the Chromebook you want to read: ");
    char input[MAX_INPUT];
    fgets(input, MAX_INPUT, stdin);
    removeNewLine(input);
    printf("\n\n");
    printf("Reading Chromebook data with ID %s...\n", input);
    printf("\n\n");
}