#include "main.h"
/**
 * append_text_to_file - a function that appends text to the end of a file
 * @filename: the file's name
 * @text_content: the content of the text
 * Return: 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t x = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
		x = write(fd, text_content, strlen(text_content));
	if (x == -1)
	{
		return (-1);
	}
	return (1);
}
