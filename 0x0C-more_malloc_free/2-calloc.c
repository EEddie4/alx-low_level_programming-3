#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of members of array.
 * @size: size of each member.
 * Return: If nmemb or size is 0, then _calloc returns NULL.
 * If malloc fails, then _calloc returns NULL.
 * or pointer to the memory storing the array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memb;
	unsigned int i = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);
	memb = malloc(nmemb * size);
	if (nmemb == NULL)
		return (NULL);
	for (; i < (nmemb * size); i++)
		*(memb + 1) = 0;
	return (memb);
}
