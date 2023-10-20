/*
  Monitor And Keeping IT Maintenance Active  
  or Makima is a utility tool that takes input as chromebook data and turns it into a json format.

  Makima is designed to run on Windows. A Linux port will be possible in the future.

  Author: Jack Spencer
  License: MIT
  Date: 2023-10-19
  Version: 0.0.12-Windows-Alpha
*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <io.h>

#define VERSION "0.0.12-Windows-Alpha"
#define AUTHOR "Jack Spencer"
#define LICENSE "MIT"

#define MAKIMA_VERSION "0.0.12-Windows-Alpha"
#define MAKIMA_AUTHOR "Jack Spencer"
#define MAKIMA_LICENSE "MIT"

#define MAX_INPUT 100
#define MAX_INPUT_LARGE 1000

#define DEFAULT_FILE "data.json"
#define DEFAULT_ERROR_FILE "error.log"
#define DEFAULT_ERROR_TEXT "If this shows up, something went wrong. :/"

#ifndef F_OK
#define F_OK 0 
#endif

#ifndef FOREGROUND_RED
#define FOREGROUND_RED 0x0004
#endif

// Path: windows/ime.h