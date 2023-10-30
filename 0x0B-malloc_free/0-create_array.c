#include "main.h"
/**
 * create_array -  a function that creates an array of chars
 * @size: array size
 * @c: character to assign
 * Return: pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *ar = (char *)malloc(size * sizeof(char));
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
