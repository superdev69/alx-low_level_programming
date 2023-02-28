#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int count;

	count = 0;

	while (count < n)
	{
		if (count != (n - 1))
			printf("%i, ", a[count]);
		else
			printf("%i", a[count]);
		count++;
	}
	printf("\n");
}
