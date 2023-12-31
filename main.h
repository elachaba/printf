#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#define UNITSIZE 65
#define BINARY 2
#define HEXA 16
#define OCTAL 8
#define DEC 10

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

int print_number(int num);
char *convert_base(unsigned int num, int base, bool lowercase);

int _putchar(char c);
int _puts(char *s);

int _printf(const char *format, ...);
int handle_format(const char *format, va_list args, handle_match map[]);
int print_char (va_list args);
int print_str(va_list args);
int print_percentage(va_list args);
int print_int(va_list args);
int print_bin(va_list args);
int print_uint(va_list args);
int print_hex(va_list args);
int print_heX(va_list args);
int print_oct(va_list args);

#endif

