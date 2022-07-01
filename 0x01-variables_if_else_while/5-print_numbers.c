#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints numbers 0 t0 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	
	for (number = 0; number <= 9; number++)
		printf("%d", number);

	printf("\n");
	return (0);
}
