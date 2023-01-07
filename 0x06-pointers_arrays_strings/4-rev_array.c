#include "main.h"

/**
 * reverse_array - to give an array in reverse order
 * @a: the given array
 * @n: the number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int count, y;

	count = 0;
	while (count < n / 2)
	{
		y = a[count];
		a[count] = a[n - count - 1];
		a[n - count - 1] = y;
		count++;
	}
}
