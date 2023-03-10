#include "main.h"

/**
 * _memcpy - copies a memory area
 * @n: number of bytes
 * @src: copy from
 * @dest: copy to
 *
 * Return: dst
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; b > a; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
