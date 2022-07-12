#include "main.h"
/**
 * puts2 - prints every other character of a string, starting
 * with the first character, followed by a new line.
 * @str: string to be printed
 * Return: Nothing
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (s[i++])
	{
		len++;
	}
	for (; i < len; i += 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
