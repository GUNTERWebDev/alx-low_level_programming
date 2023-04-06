#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int	len;
	int	i;
	int	j;

	len = strlen(s);
	i = 0;
	j = len - 1;
	while (i < j)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
		i++;
		j--;
	}
	return (1);
}
