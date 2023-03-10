#include "main.h"

/**
 * _strpbrk - searches for any of a set of bytes in a string
 * @s: string
 * @accept: string
 * Return: char common in s and accept or NULL if no such byte exist
 */

char *_strpbrk(char *s, char *accept)
{
	int v;

	while (*s)
	{
		for (v = 0; accept[v]; v++)
		{
			if (*s == accept[v])
				return (s);
		}
		s++;
	}
	return ('\0');
}
