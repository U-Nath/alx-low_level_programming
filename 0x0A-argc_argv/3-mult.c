#include <stdio.h>
#include "main.h"

/**
 * main - multiplys two numbers
 *
 * @argc: the number of args
 * @argv: the array of args
 * Return: always 0
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
