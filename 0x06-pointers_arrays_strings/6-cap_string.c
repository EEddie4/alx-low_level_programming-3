#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: string to be capitalized.
 * Return: s
 */
int check_separators(char c)
{
	i = 0;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',\
		 '(', ')', '{', '}'};

	for (; i < 13; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}
	return (0);
}

char *cap_string(char *)
{
	int i = 0;

	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'z') && i == 0)
		{
			s[i] -= 32;
		}
		if (check_separators(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] -= 32;
		}
		i++;
	}
	return (s);
}
