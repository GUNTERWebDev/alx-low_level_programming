#include "main.h"
/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to check.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int check_divisor(int n, int divisor);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_divisor(n, 2));
}

/**
 * check_divisor - Recursively checks if a number is divisible by any number
 *                  between 2 and the square root of n.
 * @n: The number to check.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int check_divisor(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (check_divisor(n, divisor + 1));
}
