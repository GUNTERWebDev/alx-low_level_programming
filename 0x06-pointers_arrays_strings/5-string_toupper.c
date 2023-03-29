#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @s: strint given
 * Return: changed string
 */
char *string_toupper(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i])
			s[i] -= 32;
		i++;
	}
	return (s);
}
