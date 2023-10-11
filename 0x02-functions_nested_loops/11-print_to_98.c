#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @x: print from this number
 */
void print_to_98(int x)
{
	if (x <= 98)
	{
		for (; x <= 98; x++)
		{
			if (x == 98)
			{
				printf("%d", x);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", x);
			}
		}
	}
	else
	{
		for (; x >= 98; x--)
		{
			if (x == 98)
			{
				printf("%d", x);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", x);
			}
		}
	}
}
