#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of @s.
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

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
		x = write(fd, text_content, _strlen(text_content));
	if (x == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
