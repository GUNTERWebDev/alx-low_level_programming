#include <stdlib.h>
#include "main.h"
/**
 * a_free - frees allocated memory for 2D array
 * @s: memory to be freed
 * @i: array (s) length
 * Return: void
 */
char **strtow(char *str)
{
	int	i, j, len;
	char	**a;

	if (str == NULL)
		return (NULL);
	len = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' || str[i] == '\t')
			i++;

		len++;
	}
	a = malloc(sizeof(char) * len + 1);
	if (a == NULL)
		return (NULL);
	for(i = 0; i < len; i++)
	{
		for (j = 0; str[j]; j++)
		{
			if (str[j] == ' ' || str[j] == '\t')
				j++;
			a[i][j] = str[j];
		}
		a[i][j] = '\0';
	}
	return (a);
}
