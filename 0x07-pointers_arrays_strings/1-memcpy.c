#include "main.h"
/**
 * _memcpy - copies memory area..
 * @dest: pointer to the memory area to be copied to.
 * @src: The source buffer to copy characters from..
 * @n: The number of bytes to be copied.
 * Return: pointer to copied memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = dest;

	for (index = 0; index < n; index++)
	{
		memory[index] = src[index];
	}
	return (memory);
}
