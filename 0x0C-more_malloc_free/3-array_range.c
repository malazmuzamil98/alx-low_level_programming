#include "main.h"
/**
 * array_range - a function that  creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: a pointer to the array
*/
int *array_range(int min, int max)
{
	int *numAr;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	numAr = (int *)malloc(sizeof(int) * (max - min + 1));
	if (numAr == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = min; i <= max; i++)
	{
		numAr[j] = i;
		j++;
	}
	return (numAr);
}
