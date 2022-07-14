#include "main.h"
/**
 * leet - encodes a string.
 * @s: string to be encoded.
 * Return: the encoded string.
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char str[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char sub[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (*s)
	{
		for (j = 0; j < 10; j++)
		{
			if (*s == str)
			{
				*s = sub;
			}
		}
		s++;
	}
	return (s);
}
