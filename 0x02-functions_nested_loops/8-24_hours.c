#include <stdio.h>

/**
 * jack_bauer - lists all the possible displays of a digital
 * clock during one day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hr;
	int min;

	hr = 0;
	while (hr < 24)
	{
		min = 0;
		while (min < 60)
		{
			if (hr < 10)
				printf("0");
			printf("%d:", hr);
			if (min < 10)
				printf("0");
			printf("%d", min);
			min++;
			printf("\n");
		}
		hr++;
	}
}
