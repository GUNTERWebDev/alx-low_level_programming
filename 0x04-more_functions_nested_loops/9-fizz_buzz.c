#include <stdio.h>

/**
 * main - print from 1 to 100, Fizz\Buzz for muliples of 3\5
 *
 * Return: always 0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("Fizz Buzz ");
		}
		else
			printf("%d ", i);
	i++;
	}
	printf("\n");
	return (0);
}
