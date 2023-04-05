#include "main.h"

/**
 * factorial - calculate factorial of a given number
 * @n: given number
 * Return: positive integer (factorial on n)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
