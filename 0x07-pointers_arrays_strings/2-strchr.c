#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate character in a string
 * @s: string given
 * @c: character to locate
 * Return: pointer to first occurrence of character | NULL if not found
 */
char *_strchr(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (s + i);
		i++;
	}
	return (NULL);
}
