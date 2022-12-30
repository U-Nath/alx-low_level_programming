#include <stdio.h>
#include "main.h"

/**
 * times_table - gives the times table of 9
 *
 * Return: void
 */

void times_table(void)
{
	int num;
	int factor;

	factor = 0;
	while (factor <= 9)
	{
		num = 0;
		while (num <= 9)
		{
			if (num != 0)
				printf(", ");
			if ((factor * num) < 10 && num != 0)
				printf(" ");
			printf("%d", (factor * num));
			num++;
		}
		printf("\n");
		factor++;
	}
}
