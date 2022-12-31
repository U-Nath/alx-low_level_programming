#include <stdio.h>

/**
 * sum_multiples - prints the sum of all multiples of 3 or 5 below 1024
 *
 * Return: void
 */

void sum_multiples(void)
{
	int t;
	int f;
	int n;
	int sum;

	n = 0;
	t = 0;
	while (n < 1024)
	{
		if ((n % 3) == 0)
		{
			t = (t + n);
		}
		n++;
	}
	f = 0;
	n = 0;
	while (n < 1024)
	{
		if ((n % 5) == 0)
		{
			f = (f + n);
		}
		n++;
	}
	sum = t + f;
	n = 0;
	while (n < 1024)
	{
		if ((n % 15) == 0)
		{
			sum = sum - n;
		}
		n++;
	}
	printf("%d\n", sum);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	sum_multiples();
	return (0);
}
