#pragma once

#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <io.h>

#define COM_WATERMELONKATANA "com.watermelonkatana"
#define COM_WATERMELONKATANA_REPOSITORY "https://github.com/colack/makima"
#define COM_WATERMELONKATANA_AUTHOR "Jack Spencer"
#define COM_WATERMELONKATANA_LICENSE "Ludwig V1.4"
#define COM_WATERMELONKATANA_WEBSITE "https://watermelonkatana.com/projects/makima"

#define COM_WATERMELONKATANA_VERSION "0.1.0-Windows-Alpha C"
#define COM_WATERMELONKATANA_VERSION_MAJOR 0
#define COM_WATERMELONKATANA_VERSION_MINOR 1
#define COM_WATERMELONKATANA_VERSION_PATCH 0
#define COM_WATERMELONKATANA_VERSION_PLATFORM "Windows"
#define COM_WATERMELONKATANA_VERSION_RELEASE "Alpha"
#define COM_WATERMELONKATANA_VERSION_LANGUAGE "C"


#define COM_WATERMELONKATANA_PREFIX "makima"
#define COM_WATERMELONKATANA_SUFFIX "\n"
#define COM_WATERMELONKATANA_EXTENSION ".wkm"

#define SMALL_STRING 10
#define MIN_STRING 100
#define MAX_STRING 1000

#define MIN_INPUT 100
#define MAX_INPUT 1000

#ifndef F_OK
#define F_OK 0
#endif

#ifndef FOREGROUND_RED
#define FOREGROUND_RED 0x0004
#endif

#endif