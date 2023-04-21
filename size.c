#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * by Abraham and Hoffmann
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 *
 * Return: Precision.
 */

int get_size(const char *format, int *i)
{
	int curr_k = *i + 1;
	int ss = 0;

	if (format[curr_k] == 'l')
		ss = S_LONG;
	else if (format[curr_k] == 'h')
		ss = S_SHORT;

	if (ss == 0)
		*i = curr_k - 1;
	else
		*i = curr_k;

	return (ss);
}

