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
	printf("Our initial t equals to %d\n", t);
	while (n < 1024)
	{
		if ((n % 3) == 0)
		{
			printf("After adding %d, t becomes %d\n", n, (t + n));
			t = (t + n);
		}
		n++;
	}
	f = 0;
	n = 0;
	printf("Our initial f equals to %d\n", f);
	while (n < 1024)
	{
		if ((n % 5) == 0)
		{
			printf("After adding %d, f  becomes %d\n", n, (f + n));
			f = (f + n);
		}
		n++;
	}
	sum = t + f;
	n = 0;
	printf("So far, our sum equals to %d\n", sum);
	while (n < 1024)
	{
		if ((n % 15) == 0)
		{
			printf("After subtracting %d, the sum becomes %d\n", n, sum);
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
