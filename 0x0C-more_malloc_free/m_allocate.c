#include "main.h"
/**
 * allocate_memory - a function that allocates memory
 * @size: size of the memory
 * Return: a pointer
*/
void *allocate_memory(unsigned int size)
{
	void *ptr = malloc(size);
	if (ptr == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}
	return (ptr);
}