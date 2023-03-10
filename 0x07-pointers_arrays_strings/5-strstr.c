#include "main.h"

/**
 * _strstr - locates a substring
 * @needle: pointer to the char string
 * @haystack: pointer to the char string
 * Return: pointer ro the beginning of the located string
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
