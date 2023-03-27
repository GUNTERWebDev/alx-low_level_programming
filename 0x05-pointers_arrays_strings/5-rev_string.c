#include "main.h"
/**
 * rev_string - reverse a string
 * @s: given string
 * return: void
 */
void rev_string(char *s)
{
	int	i;
	int	len;
	char	tmp;

	len = 0;
	i = 0;
	while (s[len])
		len++;
	while (i < len / 2)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
		i++;
	}
}
