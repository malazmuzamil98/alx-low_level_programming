#include "main.h"
/**
  * reverse_array - Entry point
  * @a: integers array
  *@n: elements in the array
  */
void reverse_array(int *a, int n)
{
	int i;
	int res;

	for (i = 0; i < n--; i++)
	{
		res = a[i];
		a[i] = a[n];
		a[n] = res;
	}
}
