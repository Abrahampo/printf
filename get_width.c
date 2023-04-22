#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 * by Abraham and Hoffmann
 * Return: width.
 */
/** edited by adwoa */
int get_width(const char *format, int *i, va_list list)
{
	int curr_k;
	int ww = 0;

	for (curr_k = *i + 1; format[curr_k] != '\0'; curr_k++)
	{
		if (is_digit(format[curr_k]))
		{
			ww *= 10;
			ww += format[curr_k] - '0';
		}
		else if (format[curr_k] == '*')
		{
			curr_k++;
			ww = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*i = curr_k - 1;
	return (ww);
}
