#include "main.h"

/**
 * get_width - Calculates the minimum width for printing a formatted string
 * @format: The format string that specifies the output format.
 * @i: A pointer to the index of the current character in the format string.
 * @list: A va_list that holds the variable arguments passed to the function.
 * Return: The minimum field width specified in the format string.
 */

int get_width(const char *format, int *i, va_list list)
{
	int curr_i;
	int width = 0;

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			width *= 10;
			width += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curr_i - 1;

	return (width);
}
