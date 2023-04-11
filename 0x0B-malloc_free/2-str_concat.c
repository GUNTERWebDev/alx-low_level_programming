#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string | NULL (Failure)
 */
char *str_concat(char *s1, char *s2)
{
	char	*str;
	int	i;
	int	j;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL && s2 == NULL)
			return (0);
		else if (s2 == NULL)
			return (s1);
		else if (s1 == NULL)
			return (s2);
	}
	str = malloc(strlen(s1) + strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
	free(str);
}
