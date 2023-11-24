#include "main.h"
/**
 * copy_memory - a function that copies memory
 * @dest: destination
 * @src: source
 * @size: number of bytes to copy
 * Return: a pointer
*/
void *copy_memory(void *dest, void *src, unsigned int size)
{
	if (dest != NULL && src != NULL)
	{
		memcpy(dest, src, size);
		free(src);
		return (dest);
	}
	return (NULL);
}
