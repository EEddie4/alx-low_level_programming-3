#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied.
 * Return: NULL if str = NULL, a pointer to the duplicated string or
 * NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *copy;
	int index = 0, len = 0;

	if (str == NULL)
		return (NULL);
	while (*str)
	{
		len++;
		str++;
	}
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[index])
		{
			copy[index] = str[index];
			index++;
		}
		copy[len] = '\0';
		return (copy);
	}
}
