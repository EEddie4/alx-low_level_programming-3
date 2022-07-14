#include "main.h"
/**
 * reversed_array - reverses an array.
 * @a: array to be reversed.
 * @n: number of elements to be reversed.
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int rev[];
	int i;

	while (i < n--)
	{
		rev = a[i];
		a[i++] = a[n];
		a[n] = rev;
	}
}
