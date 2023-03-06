#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements
 * Return: reverse
 */

void reverse_array(int *a, int n)
{
	int *start = a;
	int *end;
	int hold;

	hold = 0;
	end = a + n - 1;
	for (; start < end; start++, end--)
	{
		hold = *end;
		*end = *start;
		*start = hold;
	}
}
