#include <stdio.h>

/**
 * more_numbers - prints 10 times number from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int num;
	int counter;

	counter = 1;
	while (counter <= 10)
	{
		num = 0;
		while (num <= 14)
		{
			printf("%d", num);
			num++;
		}
	printf("\n");
	counter++
	}
}

