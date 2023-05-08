#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _strlen - return the lenght of characters
 * @s: given str
 *
 * Return: length
 */
size_t _strlen(char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * create_file - function that creates a file.
 * @filename: fil name
 * @text_content: content string
 *
 * Return: 1 if successful | 1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
		if (write(fd, text_content, _strlen(text_content)) < 0)
			return (-1);
	close(fd);
	return (1);
}

