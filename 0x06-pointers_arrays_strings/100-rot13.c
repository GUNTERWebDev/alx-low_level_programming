#include "main.h"

/**
 * rot13 - encode a string using rot13
 * @s: string given
 * Return: encoded string
 */
char	*rot13(char *s)
{
	int	i;
	char c;
	i = 0;
	while (s[i] != '\0')
	{
		c = s[i];
		if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
			c += 13;
		else if ((s[i] >= 'N' && s[i] <= 'Z')
				|| (s[i] >= 'n' && s[i] <= 'z'))
			c -= 13;
		s[i] = c;
		i++;
		c++;
	}
	return (s);
}
