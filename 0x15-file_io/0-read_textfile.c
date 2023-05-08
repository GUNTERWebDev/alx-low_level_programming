#include "main.h"
#include <stddef.h>
/**
 * read_textfile - function that read text file
 * @filename: file name
 * @letters: number of letters
 *
 * Return: number of read and printed letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *s;
	ssize_t rsize, wsize;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	s = malloc(sizeof(char) * letters);
	if (s == NULL)
		return (0);
	rsize = read(fd, s, letters);
	if (rsize < 0)
	{
		free(s);
		return (0);
	}

	s[rsize] = '\0';
	close(fd);

	wsize = write(STDOUT_FILENO, s, rsize);
	if (wsize < 0)
	{
		free(s);
		return (0);
	}
	free(s);
	return (wsize);
}
