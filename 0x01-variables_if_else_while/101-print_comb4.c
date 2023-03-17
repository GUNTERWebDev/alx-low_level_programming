#include <unistd.h>
/**
 * main - The last digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != '7')
				{
					write(1, ", ", 2);
				}
			c++;
			}
		b++;
		}
	a++;
	}
	write(1, "\n", 1);
	return (0);
}
