#include "main.h"

/**
 * rev_array - to give an array in reverse order
 * @a: the given array
 * @n: the number of elements in the array
 * Return: void
 */

void rev_array(int *a, int n)
{
	int count;
	int arr[];

	count = n;
	while (count >= 0)
	{
		arr[n - count] = a[count];
		count--;
	}
	a = arr;
}
