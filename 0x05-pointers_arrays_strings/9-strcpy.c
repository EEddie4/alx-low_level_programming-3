#include "main.h"
/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * terminating null byte (\0), to the buffer pointed to by dest
 * @src: pointer to string src
 * @dest: pointer to copied to
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[i++])
	{
		len++;
	}
	for (i = 0; i < len && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < len; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
