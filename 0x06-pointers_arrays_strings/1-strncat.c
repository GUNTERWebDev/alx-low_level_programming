#include "main.h"
/**
 * _strncat - Write a function that concatenates two strings.
 *@src: source
 *@n: n bytes from
 *@dest: destination
 * Return: Returns a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);

}
