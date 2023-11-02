#include "main.h"
/**
 * _realloc - a function that reallocates a memory block
 * @ptr: A pointer
 * @old_size: the old memory size
 * @new_size: the new memory size
 * Return: a pointer to the array
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			printf("failed to allocate memory\n");
			return (NULL); }
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL); }
	if (new_size > old_size)
	{
		ptr1 = malloc(new_size);
		if (ptr1 == NULL)
		{
			printf("failed to allocate memory\n");
			return (NULL); }
		memcpy(ptr1, ptr, old_size);
		free(ptr);
		return (ptr1); }
	if (new_size < old_size)
	{
		ptr1 = malloc(new_size);
		if (ptr1 == NULL)
		{
			printf("failed to allocate memory\n");
			return (NULL); }
		memcpy(ptr1, ptr, new_size);
		free(ptr);
		return (ptr1); }
}
