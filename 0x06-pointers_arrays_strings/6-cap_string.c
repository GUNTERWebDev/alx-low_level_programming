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

	char sep[] = {' ',
'\t', 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (s[i] == sep[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
