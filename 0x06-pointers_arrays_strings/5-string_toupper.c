#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @s: string to change to uppercase.
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	char *low = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= 32;
		}
		s++;
	}
	return (low);
}
