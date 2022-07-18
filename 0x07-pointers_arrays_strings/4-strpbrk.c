#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes..
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 * Return: pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *unique = accept;
	int i = 0;

	while (s[i])
	{
		while (accept[i])
		{
			if (accept[i] == s[i])
			{
				return (s[i]);
			}
			accept++;
		}
		accept = unique;
		i++;
	}
	return (NULL);
}
