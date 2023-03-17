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

	a = '0';
	b = '1';
	while (a <= '8')
	{
		b = a + 1;
		while (b <= '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			if (a != '8')
			{
				write(1, ", ", 2);
			}
		b++;
		}
	a++;
	}
	write(1, "\n", 1);
	return (0);
}
