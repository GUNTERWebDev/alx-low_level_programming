#include "main.h"

/**
 * _strspn - get length of prefix substring
 * Description: find length of initial s consisting entirely of bytes in accept
 * @s: string given
 * @accept: prefix substring
 * Return: num of bytes consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int	i;
	unsigned int	j;
	int	len;
	int	idk;

	i = 0;
	len = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				len++;
				idk = 0;
				break;
			}
			else
				idk = 1;
			
			j++;
		}
		if (idk == 1)
		       break;	
	i++;
	}
	return (len);
}
