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
	char *s = convert_base(num, BINARY);
	return (_puts(s));
}
