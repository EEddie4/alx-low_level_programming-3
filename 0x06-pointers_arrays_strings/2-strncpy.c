#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest: string to be copied to.
 * @src: string to copy.
 * @n: number of elements to copy.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; (src[i] && i < n) != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
