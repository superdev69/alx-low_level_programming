#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int lenth = 0;

	while (*s != '\0')
	{
		lenth++;
		s++;
	}

	return (lenth);
}
