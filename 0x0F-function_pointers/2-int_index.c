#include "function_pointers.h"
/**
 * int_index - a function that executes a function given as a parameter
 * @array: a pointer to an array
 * @size: size of the array
 * @cmp: the function pointer
 * Return: Nothing
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	}
	return (-1);
}
