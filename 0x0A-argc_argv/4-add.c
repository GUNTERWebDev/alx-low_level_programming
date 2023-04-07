#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isdigit - checks if string is valid positive number
 * @c: string given
 * Return: 1 if true | 0 if not
 */
int _isdigit(char c[])
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] < 48 || c[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - print number of arguments passed
 * @argc: arguments count
 * @argv: arguments vector (array of strings)
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int	i = 1, res = 0;

	while (i < argc)
	{
		if (!(_isdigit(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		else
			res += atoi(argv[i]);
	i++;
	}
	printf("%d\n", res);
	return (0);
}
