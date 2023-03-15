#include "main.h"
#include <stdio.h>

/**
 * main - helps to write a program that prints all arguments it recieves
 * @argc: the number of arguments inputed
 * @argv: the array that hold the string value of argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
