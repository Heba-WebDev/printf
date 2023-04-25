#include "main.h"

/**
 * handle_strings - formats strings
 * @char_printed_count: number of characters printed to the output stream
 * @args: arguments to be formatted
 * @type: either character or string
 *
 * Return: returns char_printed_count
 */

int handle_strings(int char_printed_count, va_list args, char type)
{
	char c, *s;
	int write_res;

	if (type == 'c')
	{
		c = va_arg(args, int);
		write_res = write(1, &c, 1);
		if (write_res < 0)
			return (char_printed_count);
		char_printed_count++;
		return (char_printed_count);
	}
	else if (type == 's')
	{
		s = va_arg(args, char *);
		while (*s != '\0')
		{
			write_res = write(1, s, 1);
			if (write_res < 0)
				return (char_printed_count);
			s++;
			char_printed_count++;

		}
	}
	return (char_printed_count);
}
