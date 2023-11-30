#include "main.h"
/**
 * 
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[READ_BUF_SIZE * 8];
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
	n = read(fd, &buffer, letters);
	n = write(STDOUT_FILENO, &buffer, n);
	close(fd);
	return (n);
}
