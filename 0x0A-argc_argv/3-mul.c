#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplys two numbers
 *
 * @argc: the number of args
 * @argv: the array of args
 * Return: 0 if success, 1 if failure
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}

	printf("Error\n");
	return (1);
}
