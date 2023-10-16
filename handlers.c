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
	int num, tmp, rev = 0, len = 0;

	num = va_arg(args, int);
	if (num == 0)
		return (_putchar('0'));
	tmp = num;
	if (tmp < 0)
	{
		len += _putchar('-');
		tmp = tmp * -1;
	}
	while (tmp != 0)
	{
		rev = rev * 10 + (tmp % 10);
		tmp /= 10;
	}
	while (rev != 0)
	{
		len += _putchar ('0' + (rev % 10));
		rev /= 10;
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

