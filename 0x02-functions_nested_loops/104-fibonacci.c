#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: void
 */

int main(void)
{
	int n;
	unsigned long half_a_x, half_a_y, halfa_x, halfa_y;
	unsigned long half_, half, a_x, a_y, sum;

	a_x = 0;
	a_y = 1;
	n = 0;
	while (n < 92; n++)
	{
		sum = a_x + a_y;
		printf("%lu, ", sum);
		a_x = a_y;
		a_y = sum;
	}
	half_a_x = a_x / 10000000000;
	half_a_y = a_y / 10000000000;
	halfa_x = a_x % 10000000000;
	halfa_y = a_y % 10000000000;
	n = 93;
	while (n < 99, n++)
	{
		half_ = half_a_x + half_a_y;
		half = halfa_x + halfa_y;
		if ((halfa_x + halfa_y) > 9999999999)
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
	}
	printf("\n");
	return (0);
}
