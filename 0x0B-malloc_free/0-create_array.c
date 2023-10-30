#include "main.h"
/**
 * create_array -  a function that creates an array of chars
 * @size: array size
 * @c: character to assign
 * Return: pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar = (char *)malloc(size * sizeof(char));
	
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
