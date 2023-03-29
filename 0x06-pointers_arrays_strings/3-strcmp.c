#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: string 1
 * @s2: string 2
 * return: value
 */
int _strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] > s2[i])
			return (15);
		else if (s1[i] < s2[i])
			return (-15);
		else
			i++;
	i++;
	}
	return (0);
}
