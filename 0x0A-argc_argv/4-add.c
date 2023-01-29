#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * check_element - checks whether the argument is a number
 *
 * @str: the given element
 * Return: 1 if there are any non-digits, otherwise 0
 */

int check_element(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if(!isdigit(str[count]))
			return (0);
		count++;
	}
	return (1);
}

/**
 * main - adds the arguments
 *
 * @argc: the number of args
 * @argv: the array of args
 *
 * Return: 0 if success, otherwise 1
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_element(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

	count++;
	}

	printf("%d\n", sum);
	return (0);
}
