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
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
		if (i > 0)
		{
			src[i - 1] = '\0';
		}
	}
	return (dest);
}
