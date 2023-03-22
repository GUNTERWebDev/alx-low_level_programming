#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	unsigned long Ui = 0, Uj = 1, Un;

	for (n = 0; n < 50; n++)
	{
		Un = Ui + Uj;
		printf("%lu", Un);
		Ui = Uj;
		Uj = Uni;
		if (n == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
