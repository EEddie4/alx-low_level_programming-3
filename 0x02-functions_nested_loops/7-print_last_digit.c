#include "main.h"
/**
 * print_last_digit - prints last digit of an integer
 *
 * Return - returns last digit
 */
int print_last_digit(int r)
{
	int n = r % 10;
	int z;
	if (r < 0)
	{
		z = n * -1;
	}
	else
	{
		z = n;
	}
	_putchar(z + '0');
	return (z);
}

