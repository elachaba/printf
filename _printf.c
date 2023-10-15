#include "main.h"

#define CONVERT_LIST_LEN 3
#define END_OF_LIST -2
#define ERROR -1


/**
 * _printf - produces output according to a format.
 * @format: the format of the output
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	print_match dict[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_percentage}
	};

	va_list args;

	int i, ret, res = 0, j;

	va_start(args, format);
	if (!format || (format[0] == '%' && !(format[1])))
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			res += _putchar(format[i]);
			continue;
		}
		for (j = 0; j < CONVERT_LIST_LEN; j++)
		{
			if (format[i + 1] == dict[j].sp)
			{
				ret = dict[j].func(args);
				if (ret == -1)
					return (-1);
				res += ret;
				i++;
				break;
			}
		}
		if (j == CONVERT_LIST_LEN)
			_putchar(format[i]);
	}
	va_end(args);
	return (res);
}
