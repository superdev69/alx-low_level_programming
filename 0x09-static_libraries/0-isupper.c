#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: character
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
