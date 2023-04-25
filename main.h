#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int handle_strings(int char_printed_count, va_list args, char type);

#endif
