#include <stdio.h>

/**
 * fibonacci3 - prints the first 50 fibonacci numbers
 *
 * Return: void
 */

void fibonacci3(void)
{
	int n;
	unsigned long a_x;
	unsigned long a_y;
	unsigned long half_a_x, half_a_y, halfa_x, halfa_y;
	unsigned long half_, half;

	a_x = 1;
	a_y = 2;
	n = 1;
	while (n <= 92)
	{
		printf("%lu", a_x);
		a_y = a_x + a_y;
		a_x = a_y - a_x;
		if (n < 98)
			printf(", ");
		n++;
	}

	half_a_x = a_x / 10000000000;
	half_a_y = a_y / 10000000000;
	halfa_x = a_x % 10000000000;
	halfa_y = a_y % 10000000000;

	n = 93;
	while (n <= 98)
	{
		half_ = half_a_x + half_a_y;
		half = halfa_x + halfa_y;
		if ((half_ + half) > 9999999999)
		{
			half_ += 1;
			half %= 10000000000;
		}
		printf("%lu%lu", half_, half);
		if (n < 98)
			printf(", ");
		half_a_x = half_a_y;
		halfa_x = halfa_y;
		half_a_y = half_;
		halfa_y = half;
		n++;
	}
	printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	fibonacci3();
	return (0);
}
