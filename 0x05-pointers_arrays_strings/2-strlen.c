#include "main.h"

/**
 * _strlen - finds length of a string
 * @s: string given
 * Return: length
 */
int _strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
