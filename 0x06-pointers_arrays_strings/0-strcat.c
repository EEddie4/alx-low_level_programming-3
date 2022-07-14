#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: string to be added to
 * @src: string to add
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int d_len = 0, i;

	while (*dest++)
	{
		d_len++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[d_len++] = src[i];
	}
	return (dest);
}
