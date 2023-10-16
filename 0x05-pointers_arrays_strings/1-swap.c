#include "main.h"
/**
  * swap_int - swaps the values of a and b
  *
  * @a: pointer a
  *
  * @b: pointer b
  *
  * Return: Always 0.
  */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
