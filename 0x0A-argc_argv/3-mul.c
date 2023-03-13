#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers.
 * Description: a program that the first two letters of an
 * argument and prints the product passed into it.
 * @argc: number counts of command line arguments
 * @argv: Arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		y = 1;

		for (x = 1; x < 3; x++)
		y *= atoi(argv[x]);

		printf("%d\n", y);
	}

	return (0);
}
