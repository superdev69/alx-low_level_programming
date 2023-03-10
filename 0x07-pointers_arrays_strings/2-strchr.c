#include "main.h"

/**
 * _strchr - locates a character in string
 * @c: character
 * @s: string
 * Return: first occurence of c or NULL if c isn't found
 */

char *_strchr(char *s, char c)
{
	char *v = s - 1;

	do {
		v++;
	if (*v == c)
		return (v);
	} while (*v != '\0');
	return (0);
}
