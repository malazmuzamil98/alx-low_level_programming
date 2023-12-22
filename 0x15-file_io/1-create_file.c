#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string
 * Return: 1
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t x = 0;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	x = write(fd, text_content, strlen(text_content));
	if (x == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
