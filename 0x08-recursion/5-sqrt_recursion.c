#include "main.h"

/**
 * sqrt_helper - find square root of a given int
 * @n: given int
 * @start: min
 * @end: max
 * Return: int
 */
int sqrt_helper(int n, int start, int end)
{
	int	mid;

	if (end < start)
		return (-1);
	mid = (start + end) / 2;
	if (mid * mid == n)
		return (mid);
	else if (mid * mid > n)
		return (sqrt_helper(n, start, mid - 1));
	else
		return (sqrt_helper(n, mid + 1, end));
}

/**
 * _sqrt_recursion - find square root of given number
 * @n: given number
 * Return: square root | if does not exitst (-1)
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_helper(n, 1, n));
}
