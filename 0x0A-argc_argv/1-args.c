#include <stdio.h>
#include "main.h"

/**
 * main - gives the number of args
 *
 * @argc: the count of argv
 * @argv: the arrays of args
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
