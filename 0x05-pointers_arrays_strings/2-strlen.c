#include "main.h"
/**
 * strlen - return the lenght of an string
 *
 * return - length
 */
int _strlen(char *s)
{
	int 	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
