#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @x: print from this number
 */
void print_to_98(int x)
{
	int i, j;

	if (x <= 98)
	{
		for (i = x; i <= 98; i++)
		{
			if( i != 98)
			{
				printf("%d, ", i);
			} else if( i == 0)
			{
				printf("%d\n", i);
			}
		} else if(x >= 98)
		{
			for (j = x; j >= 98; j--)
			{
				if(j != 98)
				{
					printf("%d, ", j);
				} else if(j == 0)
				{
					printf ("%d\n", j);
				}
			}
		}
	}
}
