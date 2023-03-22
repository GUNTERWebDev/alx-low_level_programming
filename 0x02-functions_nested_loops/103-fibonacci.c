#include <stdio.h>

/**
 * main - print sum of Fibonacci even values under 4 million
 *
 * Return: always 0 (Success)
 */


int main(void) 
{
	int first = 1, second = 2, next, sum = 0;

	while (second <= 4000000)
	{
		if (second % 2 == 0)
		{
			sum += second;
		}
		next = first + second;
		first = second;
		second = next;
	}
	printf("%d\n", sum);

	return 0;
}
