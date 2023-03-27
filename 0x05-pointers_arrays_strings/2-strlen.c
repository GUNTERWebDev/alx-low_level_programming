#include "main.h"
/**
 * _strlen - return the lenght of an *s
 *
 * *s - string given
 *
 * return - length
 */
int _strlen (char *s)
{
	int 	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
