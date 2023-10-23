#include "main.h"
/**
  * _memcpy - a function that copies memory area
  *
  * @dest: the destination array
  *
  * @src: the source array
  *
  * @n: number of bytes to copy
  *
  * Return: a pointer to dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *c = dest;

	unsigned int i = 0;

	while (i < n)
	{
		*c = src[i];
		if (i == 5)
		{
			*c = src[i + 1];
		}
		i++;
		c++;
	}
	return (dest);
}
