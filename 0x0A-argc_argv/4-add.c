#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print number of arguments passed
 * @argc: arguments count
 * @argv: arguments vector (array of strings)
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int	i = 1, res = 0;

	if (argc > 1)
	{
		while (i < argc)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
				res += atoi(argv[i]);
			i++;
		}
		printf("%d\n", res);
	}
	else
		printf("%d\n", res);
	return (0);
}
