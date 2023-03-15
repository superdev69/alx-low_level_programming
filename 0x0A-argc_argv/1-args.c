#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of argument passed on the command line
 * Return: number of arguments imputed excluding the program name
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
