#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: the string to operate on
 *
 * Return: len(s)
 */

int _strlen(char *s)
{
	int len;

	if (!s)
		return (0);
	for (len = 0; s[len]; len++)
		;
	return (len);
}

/**
 * print_str - prints a string to the stdout
 * @args: a pointer to the arguments of printf
 *
 * Return: the number of bytes printed
 */

int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0, len;

	if (!str)
		str = "(null)";
	len = _strlen(str);
	for (i = 0; i < len; i++)
		_putchar(str[i]);

	return (len);
}
