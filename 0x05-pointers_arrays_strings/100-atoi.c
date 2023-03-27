#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: given string
 * Return: integer
 */
int _atoi(char *s)
{
	int i, j, sign;
	unsigned int n, a;

	i = 0;
	sign = 1;
	n = 0;
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{	
		if (s[i] == '-')
			sign *= -1;
	i++;
	}
	if (s[i] != '\0')
	{
		j = i;
		while (s[j + 1] != '\0' && (s[j + 1] >= '0' && s[j + 1] <= '9'))
			j++;
		a = 1;
		while (i <= j)
		{
			n = n + (s[j] - '0') * a;
			a *= 10;
			j--;
		}
	}
	n *= sign;
	return (n);
}
