#include "main.h"
/**
 * print_numbers - It prints numbers 0 - 9 followed by a new line
 *
 * Return: Nothing.
 */
void print_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
