#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: string to be added to
 * @src: string to add
 * @n: number of bytes to add.
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s_len = 0, i = 0;
	char *cat = dest, *start = src;

	while (*src)
	{
		s_len++;
		src++;
	}
	while (*dest)
	{
		dest++;
	}
	if (n > s_len)
	{
		n = s_len;
	}
	src = start;
	for (; i < n; i++)
	{
		dest++ = src++;
	}
	*dest++ = '\0';
	return (cat);
}
