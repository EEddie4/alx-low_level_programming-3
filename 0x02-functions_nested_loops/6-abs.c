#include "main.h"
/**
 * _abs - prints the absolute value of an integer
 * @r - integer whose absolute value will be printed
 *
 * Return: absolute number of r
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}
