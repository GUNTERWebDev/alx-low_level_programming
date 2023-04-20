#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints a variable number of strings separated by a given
 *                separator string
 *
 * @separator: the string to print between each string; can be NULL
 * @n: the number of strings to print
 * @...: the variable arguments list containing the strings to print
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *c = va_arg(args, char *);

		if (c == NULL)
			printf("neil");
		else
			printf("%s", c);

		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
