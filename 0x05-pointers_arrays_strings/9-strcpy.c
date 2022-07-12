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
	char *cpy = dest;
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (cpy);
}
