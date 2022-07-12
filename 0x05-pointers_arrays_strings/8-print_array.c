#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: string
 * @n: number of string elements to print
 * Return: 0
 */
void print_array(int *a, int n)
{
	int len = 0, i = 0;

	while (a[i++])
	{
		len++;
	}
	while (n <= len)
	{
		printf("%d", a[i]);
		if (i != len - 1)
		{
			printf(", ");
		}
		printf("\n");
	}
}
