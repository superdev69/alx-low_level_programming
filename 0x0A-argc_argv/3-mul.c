#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - helps to write a program that multipies the 2nd and 3rd argument
 * @argc: number of arguments inputed in the command line
 * @argv: string or arguments in the cmmand line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1 = strtol(argv[1], 0, 10);
	int num2 = strtol(argv[2], 0, 10);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", num1 * num2);
	return (0);
}
