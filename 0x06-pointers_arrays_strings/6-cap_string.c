#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *s)
{
	int index = 0;
	
	while (s[index])
	{
		if (s[index] == ' ' ||
		s[index] == '\t' ||
		s[index] == '\n' ||
		s[index] == ',' ||
		s[index] == ';' ||
		s[index] == '.' ||
		s[index] == '!' ||
		s[index] == '?' ||
		s[index] == '"' ||
		s[index] == '(' ||
		s[index] == ')' ||
		s[index] == '{' ||
		s[index] == '}' ||
		index == 0)
			if (s[index + 1] >= 'a' && s[index + 1] <= 'z')
				s[index + 1] -= 32;
		index++;
	}
	return (s);
}
