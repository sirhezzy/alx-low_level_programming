#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed arguments and 0 if it is.
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;
	int length;
	int sum;
	char *ptr;

	if (argc < 2)
	printf("0\n");
	else
	{
		sum = 0;
		for (a = 1; a < argc; a++)
		{
			ptr = argv[a];
			length = strlen(ptr);

			for (b = 0; b < length; b++)
			{
				if (isdigit(*(ptr + b)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[a]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
