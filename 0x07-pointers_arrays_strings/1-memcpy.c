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
	char *memory = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (memory);
}
