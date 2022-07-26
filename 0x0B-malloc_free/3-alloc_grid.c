#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: Width of the array.
 * @height: Height of the array.
 * Return: NULL on failure, If width or height is 0 or
 * negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **twoDim;
	int hind, wind;

	if (width <= 0 || height <= 0)
		return (NULL);
	twoDim = malloc(sizeof(int *) * height);
	if (twoDim == NULL)
		return (NULL);
	for (hind = 0; hind < height; hind++)
	{
		twoDim = malloc(sizeof(int) * width);
		if (twoDim[hind] == NULL)
		{
			free(twoDim);
			return (NULL);
		}
	}
	for (hind = 0; hind < height; hind++)
	{
		for (wind = 0; wind < width; wind++)
			twoDim[hind][wind] = 0;
	}
	return (twoDim);
}
