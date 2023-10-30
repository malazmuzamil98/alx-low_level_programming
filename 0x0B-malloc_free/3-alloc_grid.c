#include "main.h"
/**
 * alloc_grid - a function returns a pointer to a 2D array of integers
 * @width: array width
 * @height: array height
 * Return: pointer to the arrat
*/
int **alloc_grid(int width, int height)
{
	int **ar2d;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	ar2d = (int **)malloc(height * sizeof(int *));

	if (ar2d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar2d[i] = (int *)malloc(width * sizeof(int));

		if (ar2d[i] == 0)
		{
			for (j = 0; j < i; j++)
			{
				free(ar2d[j]);
			}
		free(ar2d);
		return (0);
		}
		else
		{
			for (j = 0; j < width; j++)
			{
				ar2d[i][j] = 0;
			}
		}
	}
	return (ar2d);
}
