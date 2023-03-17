#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main ()
{
	int	a;
	int	b;

	a = 0;
	while(a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar(48 + a / 10);
			putchar(48 + a % 10);
			putchar(' ');
	        	putchar(48 + b / 10);
			putchar(48 + b % 10);
			if (!(a == 98 && b == 99))
			{
				putchar(',');
				putchar(' ');
			}
		b++;
		}
	a++;
	}
	putchar('\n');
	return (0);
}
