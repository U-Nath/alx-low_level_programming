#include <stdio.h>
#include "main.h"

/**
 * times_table - gives the times table of n, given n <= 15
 *
 * Return: void
 */

void print_times_table(int n)
{
	int num;
	int factor;

	factor = 0;
	while (factor <= n && n >= 0 && n <= 15)
	{
		num = 0;
		while (num <= n)
		{
			if (num != 0)
				printf(", ");
			if ((factor * num) < 10 && num != 0)
				printf(" ");
			if ((factor * num) < 100 && num != 0)
				printf(" ");
			printf("%d", (factor * num));
			num++;
		}
		printf("\n");
		factor++;
	}
}
