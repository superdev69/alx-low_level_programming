#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: pointer to a char string that will be checked
 * @accept: pointer to a substring we check for
 * Return: no of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				x++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (x);
		}
		s++;
	}
	return (x);
}
