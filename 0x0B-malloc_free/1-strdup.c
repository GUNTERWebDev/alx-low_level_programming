#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  function that returns a pointer to a newly
 * allocated space in memory, which contains a copy
 * of the string given as a parameter.
 * @str: given string
 * Return: NULL if str = NULL or returns a pointer to a new string
 */
char *_strdup(char *str)
{
	char	*dup;
	int	i;

	if (str == NULL)
		return (NULL);
	dup = malloc(strlen(str) + 1);
	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
	free(dup);
}
