#include "main.h"
#include <stdio.h>
/**
 * main - multiplies two numbers.followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success), 1 if it does not have 2 arguments.
 */
int main(int argc, char *argv[])
{
	int num1, num2, res = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = argv[1];
	num2 = argv[2];
	res = num1 * num2;
	printf("%d\n", res);
	return (0);
}
