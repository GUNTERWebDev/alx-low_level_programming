#include "main.h"
#include <stddef.h>

/**
 * _strlen1 - return the lenght of a str
 * @s: given string
 *
 * Return: Length of the str
 */
size_t _strlen1(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/**
 * append_text_to_file - appends text at the end of a fichier
 * @filename: name of the file
 * @text_content: content
 *
 * Return: 1 (Success) | -1 (Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
		if (write(fd, text_content, _strlen1(text_content)) < 0)
			return (-1);
	close(fd);
	return (1);
}
