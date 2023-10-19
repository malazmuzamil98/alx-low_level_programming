#include "main.h"
/**
  * reverse_array - Entry point
  * @a: integers array
  *@n: elements in the array
  */
void reverse_array(int *a, int n)
{
	int len;

	int i = 0;

	int temp;

	if (n % 2 != 0)
		len = ((n - 1) / 2);
	else
		len = n / 2;
	while (a[i] < len)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
