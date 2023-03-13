#include "main.h"

/**
 * help - helps to return natural s.r
 * @n: number to find the square root 
 * @a: square root
 * Return: 0
 */

int help(int a, int n)
{
	if  (a * a == n)
		return (a);
	else if (a * a < n)
		return help(++a, n);
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the given integer
 * Return: always 0
 */

int _sqrt_recursion(int n)
{
	return (help(n, 0));
}