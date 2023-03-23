#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int num = 612852475143;
	long int i;

	while (num != 1)
	{
		i = 2;
		while (i <= num)
		{
			if (num % i == 0)
			{
				num /= i;
			}
		i++;
		}
	}
	printf("%ld\n", i - 1);
	return (0);
}
