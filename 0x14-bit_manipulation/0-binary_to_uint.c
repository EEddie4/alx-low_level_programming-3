#include "main.h"

/**
 * binary_to_uint - A finction that converts binary number
 * to an unsigned integer
 * @b: A pointer to binary string
 * Return: unsigned integer converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, result = 0, len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	for (len -= 1; len  = 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		result += (b[len] - '0') * base;
		base *= 2;
	}
	return (result);
}
