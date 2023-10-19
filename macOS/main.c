//  "\x1b[30m"

/*
  Monitor And Keeping IT Maintenance Active  
  or Makima is a utility tool that takes input as chromebook data and turns it into a json format.

  Makima is designed to run on Windows. A Linux port will be possible in the future.

  Author: Jack Spencer
  License: MIT
  Date: 2023-10-17
  Version: 0.0.11-MacOS-Alpha
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VERSION "0.0.11-MacOS-Alpha"
#define AUTHOR "Jack Spencer"
#define LICENSE "MIT"
#define MAX_INPUT 100
#define MAX_INPUT_LARGE 1000

void removeNewLine(char *string);
void printCredits();
void printStartMenu();
void printHelp();
void readOldChromeBookData();
void readAllChromeBookData();
void enterNewChromeBookDataMode();
void getMakimaCommand(int numberInput);

void removeNewLine(char *string) {
  size_t length = strlen(string);
  if (length > 0 && string[length - 1] == '\n') {
    string[length - 1] = '\0';
  }
}

void printCredits() {
  printf("\n\n--Credits--\n\n");
  printf("Makima V%s\n", VERSION);
  printf("Monitor And Keeping IT Maintenance Active\n");
  printf("License: %s\n", LICENSE);
  printf("Author: %s\n", AUTHOR);
  printf("\n\n\n");
}

void printStartMenu() {

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
  printf("  ############ ###### ## ## # ######    Makima V%s\n", VERSION);
  printf("  #####   ####      ######### # ###     Monitor And Keeping IT Maintenance Active\n");
  printf(" # ## #              # ### ## ## #      License: %s\n", LICENSE);
  printf(" # ## #            #  ##   ###  ##      Author: %s\n", AUTHOR);
  printf("   ## #     ##             ### ##    \n");
  printf(" ##### #     #          ## # ###        Options:\n");
  printf("    ##  #  ##         ##   # ##      \n"); 
  printf("    ## ###    ###    #    ####    #     1. Enter new ChromeBook Data\n");
  printf("   ###   ##         ##    ###  ##### \n"); 
  printf(" ### ###   ##########     # ##          2. Read Old ChromeBook Data\n");
  printf("   # #  ###     #    #   ## # ###### \n");
  printf("  # ###    ###         #  # ##          3. Read All ChromeBook Data\n");
  printf("    ###     # #         #####        \n"); 
  printf("     ##    #####      ##  ###           4. Credits\n");
  printf("      ##  ########  ##  # ###        \n"); 
  printf(" #    ##  #####  #### ###  ##      #    5. Help\n");
  printf(" # ##  ## ####   ##  #  #  ## ##   # \n"); 
  printf("          ####                          6. Exit\n\n\n");
}

void printHelp() {
  printf("\n\n--Help--\n\n");
  printf("Makima is a utility tool that takes input as chromebook data and turns it into a json format.\n");
  printf("Makima is designed to run on windows. A Linux port will be possible in the future.\n");
  printf("1. Enter new ChromeBook Data\n");
  printf("This will ask you for information about the chromebook and then save it to a file called `data.json`\n");
  printf("2. Read Old ChromeBook Data\n");
  printf("This will ask you for a file name and then print the contents of the file\n");
  printf("3. Read All ChromeBook Data\n");
  printf("This will ask you for a directory and then print the contents of all files that end with .json in the directory\n");
  printf("4. Credits\n");
  printf("This will print the credits\n");
  printf("5. Help\n");
  printf("This will print the help\n");
  printf("6. Exit\n");
  printf("This will exit the program\n");
  printf("\n\n\n");
}

void readOldChromeBookData() {
  printf("Enter the file name: ");
  char fileName[1000];
  fgets(fileName, MAX_INPUT, stdin);
  removeNewLine(fileName);

  FILE *fp;
  char ch;
  fp = fopen(fileName, "r");
  if (fp == NULL) {
    printf("Error: File not found\n");
    exit(0);
  }

  while ((ch = fgetc(fp)) != EOF) {
    printf("%c", ch);
  }

  fclose(fp);

  printf("\n\n\n");
}

void readAllChromeBookData() {
  printf("Warning: This will print all files that end with .json in the specified directory\n");
  printf("This may take a while based on the number of files in the directory\n");

  printf("Would you like to continue? (y/n): ");
  char continueInput[1000];
  fgets(continueInput, MAX_INPUT, stdin);
  removeNewLine(continueInput);

    if (strcmp(continueInput, "y") != 0) {
        printf("Thanks for using ");
        printf("Makima");
        exit(0);
    }

  printf("Enter the directory: ");
  char directory[1000];
  fgets(directory, MAX_INPUT, stdin);
  removeNewLine(directory);

  printf("\n\n\n");

  printf("Files in directory:\n\n");
  char searchPath[200];
  sprintf(searchPath, "%s/*.json", directory);

  printf("This version of Makima does not support this feature. Use the Windows version or the Linux version instead.\n");
}

void enterNewChromeBookDataMode() {
  printf("\nEnter New ChromeBook Data Mode");

  printf("\n\nBasic ChromeBook Information\n\n");

  printf("Enter the ChromeBook Manufacturer: ");
  char chromeBookManufacturer[1000];
  fgets(chromeBookManufacturer, MAX_INPUT, stdin);
  removeNewLine(chromeBookManufacturer);

  printf("Enter the asset tag: ");
  char assetTag[1000];
  fgets(assetTag, MAX_INPUT, stdin);
  removeNewLine(assetTag);

  printf("Enter the ChromeBook Model: ");
  char chromeBookModel[1000];
  fgets(chromeBookModel, MAX_INPUT, stdin);
  removeNewLine(chromeBookModel);

  printf("Enter the ChromeBook Serial Number: ");
  char chromeBookSerialNumber[1000];
  fgets(chromeBookSerialNumber, MAX_INPUT, stdin);
  removeNewLine(chromeBookSerialNumber);

  printf("\n\nIssue Information\n\n");

  printf("Enter the Issue: ");
  char issue[1000];
  fgets(issue, MAX_INPUT, stdin);
  removeNewLine(issue);

  printf("Enter the Date of Issue: ");
  char dateOfIssue[1000];
  fgets(dateOfIssue, MAX_INPUT, stdin);
  removeNewLine(dateOfIssue);

  printf("Enter the Person who fixed the ChromeBook: ");
  char personWhoFixedTheChromeBook[1000];
  fgets(personWhoFixedTheChromeBook, MAX_INPUT, stdin);
  removeNewLine(personWhoFixedTheChromeBook);

  printf("Enter the Date of Fix: ");
  char dateOfFix[1000];
  fgets(dateOfFix, MAX_INPUT, stdin);
  removeNewLine(dateOfFix);

  printf("Enter the Notes about Fix: ");
  char notesAboutFix[1000];
  fgets(notesAboutFix, MAX_INPUT_LARGE, stdin);
  removeNewLine(notesAboutFix);

  printf("Enter the Parts Used: ");
  char partsUsed[1000];
  fgets(partsUsed, MAX_INPUT_LARGE, stdin);
  removeNewLine(partsUsed);

  printf("\n\nCheck for working hardware\n\n");

  printf("Is the internet connection working? (y/n): ");
  char workingInternetConnection[1000];
  fgets(workingInternetConnection, MAX_INPUT, stdin);
  removeNewLine(workingInternetConnection);

  printf("Is the keyboard fully working? (y/n): ");
  char fullyWorkingKeyboard[1000];
  fgets(fullyWorkingKeyboard, MAX_INPUT, stdin);
  removeNewLine(fullyWorkingKeyboard);

  printf("Is the trackpad fully working? (y/n): ");
  char fullyWorkingTrackpad[1000];
  fgets(fullyWorkingTrackpad, MAX_INPUT, stdin);
  removeNewLine(fullyWorkingTrackpad);

  printf("Is the screen fully working? (y/n): ");
  char fullyWorkingScreen[1000];
  fgets(fullyWorkingScreen, MAX_INPUT, stdin);
  removeNewLine(fullyWorkingScreen);

  printf("Are the speakers fully working? (y/n): ");
  char fullyWorkingSpeakers[1000];
  fgets(fullyWorkingSpeakers, MAX_INPUT, stdin);
  removeNewLine(fullyWorkingSpeakers);

  printf("Is the microphone fully working? (y/n): ");
  char fullyWorkingMicrophone[1000];
  fgets(fullyWorkingMicrophone, MAX_INPUT, stdin);
  removeNewLine(fullyWorkingMicrophone);

  printf("Is the camera fully working? (y/n): ");
  char fullyWorkingCamera[1000];
  fgets(fullyWorkingCamera, MAX_INPUT, stdin);
  removeNewLine(fullyWorkingCamera);

  printf("Are the USB ports fully working? (y/n): ");
  char fullyWorkingUSBPorts[1000];
  fgets(fullyWorkingUSBPorts, MAX_INPUT, stdin);
  removeNewLine(fullyWorkingUSBPorts);

  printf("Is the Charging Port fully working? (y/n): ");
  char fullyWorkingChargingPort[1000];
  fgets(fullyWorkingChargingPort, MAX_INPUT, stdin);
  removeNewLine(fullyWorkingChargingPort);

  printf("Is the headphone jack fully working? (y/n): ");
  char fullyWorkingHeadphoneJack[1000];
  fgets(fullyWorkingHeadphoneJack, MAX_INPUT, stdin);
  removeNewLine(fullyWorkingHeadphoneJack);

  printf("\n\nConfirm that the ChromeBook is fully working\n\n");

  printf("Is the ChromeBook fully working? (y/n): ");
  char fullyWorkingChromeBook[1000];
  fgets(fullyWorkingChromeBook, MAX_INPUT, stdin);
  removeNewLine(fullyWorkingChromeBook);

  printf("Is the ChromeBook fully charged? (y/n): ");
  char fullyChargedChromeBook[1000];
  fgets(fullyChargedChromeBook, MAX_INPUT, stdin);
  removeNewLine(fullyChargedChromeBook);

  printf("Is the ChromeBook fully updated? (y/n): ");
  char fullyUpdatedChromeBook[1000];
  fgets(fullyUpdatedChromeBook, MAX_INPUT, stdin);
  removeNewLine(fullyUpdatedChromeBook);

  printf("Is the ChromeBook fully tested? (y/n): ");
  char fullyTestedChromeBook[1000];
  fgets(fullyTestedChromeBook, MAX_INPUT, stdin);
  removeNewLine(fullyTestedChromeBook);

  printf("Did you complete a powerwash? (y/n): ");
  char completedPowerwash[1000];
  fgets(completedPowerwash, MAX_INPUT, stdin);
  removeNewLine(completedPowerwash);

  printf("\n\n\n");

  printf("Data in JSON format:\n\n");

  printf("{\n");
  printf("  \"assetTag\": \"%s\",\n", assetTag);
  printf("  \"chromeBookManufacturer\": \"%s\",\n", chromeBookManufacturer);
  printf("  \"chromeBookModel\": \"%s\",\n", chromeBookModel);
  printf("  \"chromeBookSerialNumber\": \"%s\",\n", chromeBookSerialNumber);
  printf("  \"issue\": \"%s\",\n", issue);
  printf("  \"dateOfIssue\": \"%s\",\n", dateOfIssue);
  printf("  \"checks\": {\n");
  printf("    \"workingInternetConnection\": \"%s\",\n", workingInternetConnection);
  printf("    \"fullyWorkingKeyboard\": \"%s\",\n", fullyWorkingKeyboard);
  printf("    \"fullyWorkingTrackpad\": \"%s\",\n", fullyWorkingTrackpad);
  printf("    \"fullyWorkingScreen\": \"%s\",\n", fullyWorkingScreen);
  printf("    \"fullyWorkingSpeakers\": \"%s\",\n", fullyWorkingSpeakers);
  printf("    \"fullyWorkingMicrophone\": \"%s\",\n", fullyWorkingMicrophone);
  printf("    \"fullyWorkingCamera\": \"%s\",\n", fullyWorkingCamera);
  printf("    \"fullyWorkingUSBPorts\": \"%s\",\n", fullyWorkingUSBPorts);
  printf("    \"fullyWorkingChargingPort\": \"%s\",\n", fullyWorkingChargingPort);
  printf("    \"fullyWorkingHeadphoneJack\": \"%s\",\n", fullyWorkingHeadphoneJack);
  printf("    \"fullyWorkingChromeBook\": \"%s\",\n", fullyWorkingChromeBook);
  printf("    \"fullyChargedChromeBook\": \"%s\",\n", fullyChargedChromeBook);
  printf("    \"fullyUpdatedChromeBook\": \"%s\",\n", fullyUpdatedChromeBook);
  printf("    \"fullyTestedChromeBook\": \"%s\",\n", fullyTestedChromeBook);
  printf("    \"completedPowerwash\": \"%s\"\n", completedPowerwash);
  printf("  },\n");
  printf("  \"fix\": {\n");
  printf("    \"personWhoFixedTheChromeBook\": \"%s\",\n", personWhoFixedTheChromeBook);
  printf("    \"dateOfFix\": \"%s\",\n", dateOfFix);
  printf("    \"notesAboutFix\": \"%s\",\n", notesAboutFix);
  printf("    \"partsUsed\": \"%s\"\n", partsUsed);
  printf("  }\n");
  printf("}\n\n");

  printf("Save to file `data.json`? This will overwrite all data in the file. (y/n): ");
  char saveToFile[1000];
  fgets(saveToFile, MAX_INPUT, stdin);
  removeNewLine(saveToFile);

  if (strcmp(saveToFile, "y") != 0) {
    printf("Thanks for using Makima");
    exit(0);
  }

  FILE *fp;
  fp = fopen("data.json", "w");

  fprintf(fp, "{\n");
  fprintf(fp, "  \"assetTag\": \"%s\",\n", assetTag);
  fprintf(fp, "  \"chromeBookManufacturer\": \"%s\",\n", chromeBookManufacturer);
  fprintf(fp, "  \"chromeBookModel\": \"%s\",\n", chromeBookModel);
  fprintf(fp, "  \"chromeBookSerialNumber\": \"%s\",\n", chromeBookSerialNumber);
  fprintf(fp, "  \"issue\": \"%s\",\n", issue);
  fprintf(fp, "  \"dateOfIssue\": \"%s\",\n", dateOfIssue);
  fprintf(fp, "  \"checks\": {\n");
  fprintf(fp, "    \"workingInternetConnection\": \"%s\",\n", workingInternetConnection);
  fprintf(fp, "    \"fullyWorkingKeyboard\": \"%s\",\n", fullyWorkingKeyboard);
  fprintf(fp, "    \"fullyWorkingTrackpad\": \"%s\",\n", fullyWorkingTrackpad);
  fprintf(fp, "    \"fullyWorkingScreen\": \"%s\",\n", fullyWorkingScreen);
  fprintf(fp, "    \"fullyWorkingSpeakers\": \"%s\",\n", fullyWorkingSpeakers);
  fprintf(fp, "    \"fullyWorkingMicrophone\": \"%s\",\n", fullyWorkingMicrophone);
  fprintf(fp, "    \"fullyWorkingCamera\": \"%s\",\n", fullyWorkingCamera);
  fprintf(fp, "    \"fullyWorkingUSBPorts\": \"%s\",\n", fullyWorkingUSBPorts);
  fprintf(fp, "    \"fullyWorkingChargingPort\": \"%s\",\n", fullyWorkingChargingPort);
  fprintf(fp, "    \"fullyWorkingHeadphoneJack\": \"%s\",\n", fullyWorkingHeadphoneJack);
  fprintf(fp, "    \"fullyWorkingChromeBook\": \"%s\",\n", fullyWorkingChromeBook);
  fprintf(fp, "    \"fullyChargedChromeBook\": \"%s\",\n", fullyChargedChromeBook);
  fprintf(fp, "    \"fullyUpdatedChromeBook\": \"%s\",\n", fullyUpdatedChromeBook);
  fprintf(fp, "    \"fullyTestedChromeBook\": \"%s\",\n", fullyTestedChromeBook);
  fprintf(fp, "    \"completedPowerwash\": \"%s\"\n", completedPowerwash);
  fprintf(fp, "  },\n");
  fprintf(fp, "  \"fix\": {\n");
  fprintf(fp, "    \"personWhoFixedTheChromeBook\": \"%s\",\n", personWhoFixedTheChromeBook);
  fprintf(fp, "    \"dateOfFix\": \"%s\",\n", dateOfFix);
  fprintf(fp, "    \"notesAboutFix\": \"%s\",\n", notesAboutFix);
  fprintf(fp, "    \"partsUsed\": \"%s\"\n", partsUsed);
  fprintf(fp, "  }\n");
  fprintf(fp, "}");

  fclose(fp);

  printf("Saved to file `data.json`\n");
}

void getMakimaCommand(int numberInput) {
  switch (numberInput) {
    case 1:
      enterNewChromeBookDataMode();
      break;
    case 2:
      readOldChromeBookData();
      break;
    case 3:
      readAllChromeBookData();
      break;
    case 4:
      printCredits();
      break;
    case 5:
      printHelp();
      break;
    case 6:
      printf("Exiting...\n");

      printf("Thanks for using Makima\n");

      exit(0);
      break;
    default:
      printf("Invalid Input\n");
      break;
  }
}

int main() {

  int numberInput;

  printStartMenu();

  while (1) {
    char numberInputStr[10];
    printf("> ");
    fgets(numberInputStr, sizeof(numberInputStr), stdin);
    sscanf(numberInputStr, "%d", &numberInput);

    getMakimaCommand(numberInput);
  }

  return 0;
}

// Path: /macOS/main.c