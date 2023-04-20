#include <stdarg.h>
#include "main.c"

/**
 * sum_them_all - sums all the integers passed as arguments
 * @n: the number of integers passed as arguments
 * @...: the integers to be summed
 *
 * Return: the sum of all the integers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		int	x = va_arg(args, int);

		sum += x;
	}

	va_end(args);
	return (sum);
}
