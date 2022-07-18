#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: an input string to search in
 * @needle: input string to locate into haystack.
 * Return: pointer to the beginning of the located
 * substring, NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *n_input = needle, *sstring = haystack;

	while (*haystack)
	{
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
