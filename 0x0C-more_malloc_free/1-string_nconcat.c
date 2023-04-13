#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 * Return: pointer to new concatenated string (Success) | NULL (Failure)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char	*str;
	unsigned int	i, j;

	str = malloc((sizeof(char) * strlen(s1)) + n + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] && j < n)
	{
		str[i++] = s2[j];
		j++;
	}
	str[i] = '\0';
	return (str);
}
