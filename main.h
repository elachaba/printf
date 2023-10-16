#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>


/**
 * struct match - matches the specifiers with the print function
 * @sp: the specifier
 * @func: the print function corresponding to the sepcifier
 *
 */

typedef struct match
{
	char *sp;
	int (*func)();
} handle_match;

int _printf(const char *format, ...);
int handle_format(const char *format, va_list args, handle_match map[]);
int _putchar(char c);
int print_char (va_list args);
int print_str(va_list args);
int print_percentage(va_list args);
int print_int(va_list args);

#endif

