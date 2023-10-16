#include "main.h"


/**
 * print_number - prints a number to the stdout
 * @num: the number to print
 *
 * Return: the number of characters printed
 */

int print_number(int num)
{
	int pow = 1, len = 0;
	unsigned int tmp;

	if (num < 0)
	{
		len += _putchar('-');
		tmp = num * -1;
	}
	else
		tmp = num;

	while (tmp / pow > 9)
		pow *= 10;

	while (pow != 0)
	{
		len += _putchar('0' + tmp / pow);
		tmp %= pow;
		pow /= 10;
	}

	return (len);
}

/**
 * convert_base - converts an unsigned int to a given base
 * @num: the number to convert
 * @base: the base to which we convert the number num
 * @lower: a specifier for x or X, if lowecase == 1
 * the numbers after 10 in hex are printed in lowercase
 *
 * Return: a string containing the converted number
 */

char *convert_base(unsigned int num, int base, bool lower)
{
	static char converted[UNITSIZE];
	static char *rep;
	char *ptr;

	rep = (lower) ?
		"0123456789abcdef" :
		"0123456789ABCDEF";
	ptr = &converted[UNITSIZE - 1];

	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
