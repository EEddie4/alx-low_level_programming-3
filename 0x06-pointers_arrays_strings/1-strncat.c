#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: string to be added to
 * @src: string to add
 * @n: number of bytes to add.
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d_len = 0, i = 0;

	while (dest[i++])
	{
		d_len++;
	}
	for (i = 0; src[i] &&  i < n; i++)
	{
		dest[d_len++] = src[i];
	}
	dest[d_len++] = '\0';
	return (dest);
}
