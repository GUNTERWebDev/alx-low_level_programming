#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints any number of arguments passed to it based on a format
 * string that specifies the type of each argument
 * @format: a string of characters that specify the type of each argument
 *          and the separator to use between arguments
 *          c: character
 *          i: integer
 *          f: float
 *          s: string
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	char *sep = "";
	va_list args;

	va_start(args, format);
	if (format != '\0')
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (s == '\0')
						printf("%s(nil)", sep);
					else
						printf("%s%s", sep, s);
					break;
				default:
					break;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
