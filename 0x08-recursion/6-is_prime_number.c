#include "main.h"

/**
 * preliminary - scans for factors of the number
 *
 * @n: the given number
 * @i: the possible factor of the number
 *
 * Return: i if exists, otherwise -1
 */
int preliminary(int i, int n)
{
	if (n % i != 0 && i < n)
		return (preliminary(i + 1, n));
	else if (i == n)
		return (1);
	else
		return (-1);
}

/**
 * is_prime_number - finds whether a number is prime
 *
 * @n: the given number
 * Return: 1 if it's prime
 * if n < 0 or if not prime, return -1
 */

int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n <= 1)
		return (-1);
	else
		return (preliminary(i, n));
}
