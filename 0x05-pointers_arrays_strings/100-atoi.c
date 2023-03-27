#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: given string
 * Return: integer
 */
int _atoi(char *s)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		i++;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
 		i++;
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		else
			i++;
	i++;
	}
	while ((s[i] >= 32 && s[i] <= 47) || (s[i] >= 58 && s[i] <= 64) ||
                                    (s[i] >= 91 && s[i] <= 96) || (s[i] >= 123 && s[i] <= 126))
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (res * sign);
}
