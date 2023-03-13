#include "main.h"

/**
 * help - helps to determine prime number or not
 * @a: number to be checked
 * @n: number to check for
 * Return: Always 0
 */

int help(int n, int a)
{
	if (a > 9)
		return (1);
	else if (a % n != 0)
		return (help(n, ++a));
	return (0);
}

/**
 * is_prime_number - checks if a number is prime or not
 * @n: number to be checked
 * Return: prime or not
 */

int is_prime_number(int n)
{
	if (n == 1 || n == 0 || n == -1)
		return (0);
	return (help(n, 2));
}
