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
	int len1 = 0, len2 = 0, i = 0;

	newstr = s1;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
		len1++;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
		len2++;
	if (n >= len2)
		n = len2;
	newstr = malloc(sizeof(char) + (len1 + n + 1));
	if (newstr == NULL)
		return (NULL);
	for (i = 0; s2[i] && (i < n); i++)
	{
		newstr[len1++] = s2[i];
	}
	newstr[len1] = '\0';
	return (newstr);
}
