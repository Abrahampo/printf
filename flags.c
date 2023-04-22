#include "main.h"

/**
 * get_flags - Claculate active flags
 * by Abraham and Hoffmann
<<<<<<< HEAD
 * @format: formatted string in which to print the argument
=======
 * @format: format string in which to print the argument
>>>>>>> 559ecdb4dae56520471b0b8ef35d525c437862c7
 * @i: takes a parameter
 * Return: flags
 */
/** this work was second viewed and edited by adwoa */
int get_flags(const char *format, int *i)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8 16 */
	int y, curr_i;
	int flags = 0;
	const char FLAGS_CH[] = {'_', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		for (y = 0; FLAGS_CH[y] != '\0'; y++)
			if (format[curr_i] == FLAGS_CH[y])
			{
				flags |= FLAGS_ARR[y];
				break;
			}
		if (FLAGS_CH[y] == 0)
			break;
	}
	*i = curr_i - 1;
	return (flags);
}
