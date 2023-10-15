#include "main.h"

/**
 * print_char - print a char to the stdout
 * @args: a pointer to the arguement of the printf function
 *
 * Return: the number of characters printed
 */

int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (_putchar(c));
}

