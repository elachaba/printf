#include "main.h"


/**
 * _printf - produces output according to a format.
 * @format: the format of the output
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{

	handle_match map[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percentage},
		{"d", print_int},
		{"i", print_int},
		{"b", print_bin},
		{"u", print_uint},
		{"x", print_hex},
		{"X", print_heX},
		{"o", print_oct},
		{NULL, NULL}
	};
	va_list args;
	int res;

	if (!format)
		return (-1);
	va_start(args, format);
	res = handle_format(format, args, map);
	va_end(args);

	return (res);
}
