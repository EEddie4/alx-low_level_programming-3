#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: The string to be searched.
 * @c : character to be located.
 * Return: If c is found - a pointer to the first occurence.
 * otherwise NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return(s);
	}
	return (NULL);
}
