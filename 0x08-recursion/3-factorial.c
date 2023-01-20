#include "main.h"

/**
 * factorial - calculates the factorial of a number
 *
 * @n: the mentioned number
 * Return: the factorial of the number
 * If the number is less than 0, a return of -1 indicates error
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
