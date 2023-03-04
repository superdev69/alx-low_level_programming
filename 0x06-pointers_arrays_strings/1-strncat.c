#include "main.h"

/**
 * _strncat - concatintes two strings with a byte
 * @dest: copy to
 * @src: copy from
 * @n: character to be copied
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
