#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: string to be capitalized.
 * Return: s
 */
char *cap_string(char *s)
{
	int i, j;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',\
		'(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') && i == 0)
		{
			s[i] -= 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (s[i] == separators[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
