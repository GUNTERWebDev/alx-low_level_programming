#include "main.h"
/**
 * strcpy - copy string to another
 * @dest: destination
 * @src: source
 * return: char
 */
char *_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
