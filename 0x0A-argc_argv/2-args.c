#include <stdio.h>
#include "main.h"

/**
 * main - lists the arguments of the program
 *
 * @argc: the number of args
 * @argv: the array of args
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc, count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
