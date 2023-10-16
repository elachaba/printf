#include "main.h"

/**
 * print_char - prints a single character to the stdout
 * @args: a pointer to the arguments of printf
 *
 * Return: the number of characters printed
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * print_str - prints a string to the stdout
 * @args: a pointer to the arguments of printf
 *
 * Return: the number of characters printed
 */

int print_str(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";

	return (_puts(s));
}

/**
 * print_int - prints an integer to the stdout
 * @args: a pointer to the arguments of printf
 *
 * Return: the number of characters printed
 */

int print_int(va_list args)
{
	int num  = va_arg(args, int);

	return (print_number(num));
}

/**
 * print_percentage - prints % to the stdout
 * @args: a pointer to the arguments of printf
 *
 * Return: 1
 */

int print_percentage(__attribute__((unused)) va_list args)
{
	return (_putchar('%'));
}

/**
 * print_bin - prints a number in base 2 to the stdout
 * @args: a pointer to the arguments of printf
 *
 * Return: the number of characters printed
 */

int print_bin(va_list args)
{
	unsigned int num = va_arg(args, int);
	char *s = convert_base(num, BINARY, false);
	return (_puts(s));
}

/**
 * print_uint - prints an unsigned int to the stdout
 * this functon handles the specifier u
 * @args: the pointer to the arguments of printf
 *
 * Return: the number of bytes printed
 */

int print_uint(va_list args)
{
	unsigned int num = va_arg(args, int);
	char *s = convert_base(num, DEC, false);

	return (_puts(s));
}

/**
 * print_heX - prints a number in the hexadecimal base.
 * The letters representing the numbers after 9 in te hexa
 * base are in uppercase
 * @args: the pointer to the arguments of printf
 *
 * Return: the number of bytes printed
 */

int print_heX(va_list args)
{
	unsigned int num = va_arg(args, int);
	char *s = convert_base(num , HEXA, false);

	return (_puts(s));
}

/**
 * print_hex - prints a number in the hexadecimal base.
 * The letters representing the numbers after 9 in the hexa
 * base are in lowercase
 * @args: the pointer to the arguments of printf
 *
 * Return: the number of bytes printed
 */

int print_hex(va_list args)
{
	unsigned int num = va_arg(args, int);
	char *s = convert_base(num, HEXA, true);

	return(_puts(s));
}

/**
 * print_oct - prints a number in the octal base.
 * @args: the pointer to the arguments of printf
 *
 * Return: the number of bytes printed
 */

int print_oct(va_list args)
{
	unsigned int num = va_arg(args, int);
	char *s = convert_base(num, OCTAL, false);

	return (_puts(s));
}
