#include "d9g.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints the details of the dog.
 * @d: dog's details to be printed.
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %d\nOwner: %s\n", d->name, d->age, d->owner);
}
