#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string or NULL
 */
char *_strdup(char *str)
{
	char	*cp;
	int	i;

	if (*str == '\0')
		return (NULL);

	i = strlen(str);
	cp = malloc(sizeof(char) * (i + 1));
	if (cp == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		cp[i] = str[i];

	cp[i] = '\0';
	return (cp);
}

/**
 * new_dog - creates a new dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Return: pointer to new dog structure or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cp;
	char *cp_name, *cp_owner;

	cp_name = _strdup(name);
	if (cp_name == NULL)
		return (NULL);

	cp_owner = _strdup(owner);
	if (cp_owner == NULL)
	{
		free(cp_name);
		return (NULL);
	}

	cp = malloc(sizeof(dog_t));
	if (cp == NULL)
	{
		free(cp_name);
		free(cp_owner);
		return (NULL);
	}

	cp->name = cp_name;
	cp->age = age;
	cp->owner = cp_owner;

	return (cp);
}

