#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character c to stdout
 * @c: the character to print
 *
 * Return: on success 1
 * on error, return -1 and error is set properly
 */

int _putchar(char c)
{
	return (writes(1, &c, 1));
}
