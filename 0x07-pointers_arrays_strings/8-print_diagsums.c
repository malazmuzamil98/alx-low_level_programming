#include "main.h"
/**
  * print_diagsums - a function that prints the sum of the two diagonals
  *
  * @a: the square matrix
  *
  * @size: array size
  *
  * Return: Nothing
  */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	while (i < size)
	{
		sum1 += a[(i * size) + i];
		i++;
	}
	i = size - 1;
	while (i >= 0)
	{
		sum2 += a[(i * size) + (size - 1 - i)];
		i--;
	}
	printf("%d, %d\n", sum1, sum2);
}
