#include "main.h"
/**
 * reversed_array - reverses an array.
 * @a: array to be reversed.
 * @n: number of elements to be reversed.
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int rev, i = 0;

	while (i < n--)
	{
		rev = a[i];
		a[i++] = a[n];
		a[n] = rev;
	}
}
