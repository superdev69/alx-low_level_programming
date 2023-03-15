#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of a program followed by a new line
 * @argv: array that hold the list of arguments in the panel
 * @argc: unused attribute
 * Return: the name of the program
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
