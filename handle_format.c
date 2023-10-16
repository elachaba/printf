#include "main.h"

/**
 * handle_format - Handles the format and prints the characters
 * to the stdout based on the conversion types in format string
 * and the arguments pointed by args
 *
 * @format: the format string indicating the conversions
 * @args: the pointer to the arguments to print
 * @map: a map of the handle functions of each conversion type
 *
 * Return: the number of bytes printed
 */

int handle_format(const char *format, va_list args, handle_match map[])
{
	int i, j, ret_val, printed = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			printed += _putchar(format[i]);
		else
		{
			for (j = 0; map[j].sp != NULL; j++)
			{
				if (format[i + 1] == map[j].sp[0])
				{
					ret_val = map[j].func(args);
					if (ret_val == -1)
						return (-1);
					printed += ret_val;
					break;
				}
			}
			if (map[j].sp == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] == '\0')
					return (-1);
				_putchar(format[i]);
				_putchar(format[i + 1]);
				printed += 2;
			}
			i++;
		}
	}
	return (printed);
}

