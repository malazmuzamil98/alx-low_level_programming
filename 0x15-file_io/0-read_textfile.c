#include "main.h"
/**
 * read_textfile - reads atext file and prints it to the POSIX standard output
 *
 * @filename: name
 * @letters: size
 *
 * Return: the actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t n;

	if (filename == NULL || letters == 0)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(letters);
	n = read(fd, buffer, letters);
	n = write(STDOUT_FILENO, buffer, n);
	free(buffer);
	close(fd);
	return (n);
}
