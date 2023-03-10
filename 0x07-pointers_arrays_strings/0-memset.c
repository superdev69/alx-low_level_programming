#include "main.h"

/**
 * _memset - fills memeory wit a conctant byte
 * @n: number of bytes
 * @s: memory area
 * @b: constant byte
 *
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
