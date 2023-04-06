#include "main.h"
#include <string.h>

/**
 * pali_checks - to compare
 * @s: given str
 * @start: start of the string
 * @len: length of the string
 *
 * Return: 1 if @s is a palindrome, 0 otherwise
 */

int pali_checks(char *s, int len, int start)
{
	if (s[start] != s[len])
		return (0);
	else if (start >= len)
	{
		return (1);
	}
	else
		return (pali_checks(s, len - 1, start + 1));
}
/**
 * is_palindrome - check if the given string is palindrome
 * @s:given string
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int	len;
	int	start;

	len = strlen(s) - 1;
	start = 0;

	return (pali_checks(s, len, start));
}

