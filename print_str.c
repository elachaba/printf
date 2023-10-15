#include "main.h"

/**
 * print_str - prints a string to the stdout
 * @args: a pointer to the arguments of printf
 *
 * Return: the number of bytes printed
 */

int print_str(va_list args)
{
	char *str = va_arg(args, char *);

	int i = 0;

	if (!str)
	{
		str = "(null)";
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
