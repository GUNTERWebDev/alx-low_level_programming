#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * argstostr - concatenates all arguments passed
 * @ac: arguments count
 * @av: arguments vector (array of strings)
 * Return: pointer to new string | NULL (Failure)
 */
char *argstostr(int ac, char **av)
{
	int	leng, i, j, L;
	char	*c;

	if (ac == 0 || av == NULL)
		return (0);
	leng = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			leng++;
	leng++;
	}
	c = malloc(sizeof(char) * leng);
	if (c == NULL)
		return (NULL);
	L = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			c[L] = av[i][j];
			L++;
		}
		c[L] = '\n';
		L++;
	}
	c[L] = '\0';
	return (c);
}
