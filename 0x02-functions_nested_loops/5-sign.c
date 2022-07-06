#include "main.h"
/**
 * print_sign - Prints the sign of a number.
 * @c - number whose sign will be printed
 *
 * return 1 if sign is postive, return 0 if 0,
 * return -1 if sign is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
