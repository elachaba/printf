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
	int i, len;

	if (s == NULL)
		s = "(null)";
	for (len = 0; s[len] != '\0'; len++)
		;
	for (i = 0; i < len; i++)
		_putchar(s[i]);

	return (len);
}


/**
 * print_int - prints an integer to the stdout
 * @args: a pointer to the arguments of printf
 *
 * Return: the number of characters printed
 */

int print_int(va_list args)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n  = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
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
