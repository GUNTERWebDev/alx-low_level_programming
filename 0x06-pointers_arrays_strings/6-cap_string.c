#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string given
 * Return: capitalized stirng
 */
char *cap_string(char *s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
	i++;
	}
	i = 0;
	j = 1;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (j == 1)
				s[i] -= 32;
			j = 0;
		}
		else if (s[i] >= '0' && s[i] <= '9')
			j = 0;
		else
			j = 1;
	i++;
	}
	return (s);
}
