#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a char.
 * Description: A function that prints a character
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - Prints an int.
 * Description: A function that prints an integer
 * @arg: A list of arguments pointing to
 *       the integer to be printed.
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - Prints a float.
 * Description: A function that prints a float.
 * @arg: A list of arguments pointing to
 *       the float to be printed.
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - Prints a string.
 * Description: A function that prints a string
 * @arg: A list of arguments pointing to
 *       the string to be printed.
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Prints anything, followed by a new line.
 * @format: string of characters representing the argument types.
 * @...: variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 *	or char * is ignored.
 *	If a string argument is NULL, (nil) is printed.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int a = 0, b = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + a)))
	{
		b = 0;

		while (b < 4 && (*(format + a) != *(funcs[b].symbol)))
			b++;

		if (b < 4)
		{
			printf("%s", separator);
			funcs[b].print(args);
			separator = ", ";
		}

		a++;
	}

	printf("\n");

	va_end(args);
}
