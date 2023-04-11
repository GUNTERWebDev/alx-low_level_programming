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

	dup = malloc(strlen(str));
	if (str == 0)
		return (0);
	for (i = 0; str[i]; i++)
		dup[i] = str[i];
	if (dup == 0)
		return (0);
	else
		return (dup);
	free(dup);
}
