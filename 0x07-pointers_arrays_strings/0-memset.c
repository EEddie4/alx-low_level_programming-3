#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * Return: pointer to filled memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int index;
	char *memory = s;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (memory);
}
