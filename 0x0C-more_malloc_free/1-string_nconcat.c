#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string to be concatenated to.
 * @s2: string whose elements will be concatenated to s1.
 * @n: number of elements from s2 to concatenate.
 * Return: If the function fails, it should return NULL.
 * if NULL is passed, treat it as an empty string.
 * or pointer to concatenated string if successful.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int len1 = n, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s2)
		len1++;
	newstr = malloc(sizeof(char) + (len1 + 1));
	if (newstr == NULL)
		return (NULL);
	len1 = 0;
	for (i = 0; s1[i]; i++)
	{
		newstr[len1++] = s1[i];
	}
	for (i = 0; s2[i] && (i < n); i++)
	{
		newstr[len1++] = s2[i];
	}
	newstr[len1] = '\0';
	return (newstr);
}
