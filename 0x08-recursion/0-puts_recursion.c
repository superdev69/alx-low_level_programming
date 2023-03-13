#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: a pointer to the string to be printed
 * Return: 0
 */

void _puts_recursion(char *s)
{
	char *s1 = s;

	if (*s1 != '\0')
	{
		_putchar(*s1);
		s1++;
		_puts_recursion(s1);
	}
	else
		_putchar('\n');
}
