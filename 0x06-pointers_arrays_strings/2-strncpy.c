#include "main.h"
/**
 * _strncpy - function that copies a string.
 *
 * @dest: destination
 * @src: source
 * @n: size
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
