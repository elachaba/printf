#include "main.h"

/**
 * _puts - prints a string to the stdout.
 * @s: the string to print
 *
 * Return: the number of characters printed
 */

int _puts(char *s)
{
	int i, len;
	for (len = 0; s[len] != '\0'; len++)
		;
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (len);
}
