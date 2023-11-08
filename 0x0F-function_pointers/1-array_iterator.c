#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given as a parameter
 * @array: a pointer to an array
 * @size: size of the array
 * @action: the function pointer
 * Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
