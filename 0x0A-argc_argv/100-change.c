#include <stdlib.h>
#include <stdio.h>

/**
 * main - gives the change of a given amount
 *
 * @argc: the number of args
 * @argv: the array of args
 * Return: 0 if success, 1 if error
 */

int main(int argc, char *argv[])
{
	int position, total, aux, change;
	int coins[] = {25, 10, 5, 2 ,1};

	position = total = aux = change = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[position])
	{
		if (total >= coins[position])
		{
			aux = total / coins[position];
			change += aux;
			total -= aux * coins[position];
		}
		position++;
	}
	printf("%d\n", change);
	return (0);
}	
