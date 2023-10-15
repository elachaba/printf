#include "main.h"

#define CONVERT_LIST_LEN 3

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

	int i, returned, res = 0, j;

	va_start(args, format);
	if (!format || (format[0] == '%' && !(format[1])))
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			res++;
		}
		else
		{
			j = 0;
			while (j < CONVERT_LIST_LEN)
			{
				if (dict[j].sp == format[i + 1])
				{
					returned = dict[j].func(args);
					i++;
					if (returned == -1)
						return (-1);
					res += returned;
					break;
				}
				j++;
			}
			if (j < CONVERT_LIST_LEN)
				continue;
			_putchar(format[i]);
		}
	}
	va_end(args);
	return (res);
}
