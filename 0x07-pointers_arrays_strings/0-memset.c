#include "main.h"

/**
 * _memset -  function that fills memory with a constant byte.
 * @s: source
 * @b: character
 * @n: number of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
