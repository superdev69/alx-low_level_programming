#include "main.h"

/**
 * _pow_recursion - returns the value of x to power y
 * @x: int type value
 * @y: int type value
 * Return: always 0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y--));
}
