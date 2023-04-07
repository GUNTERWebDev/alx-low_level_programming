#include <stdio.h>

/**
 * main - print all arguments received
 * @argc: arguments count
 * @argv: argumnets vector (array of strings)
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int	i = 0;
	int	j;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			printf("%c", argv[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
