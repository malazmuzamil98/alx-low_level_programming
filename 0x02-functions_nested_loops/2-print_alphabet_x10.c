#include "main.h"

/**
* print_alphabet_x10 - print the alphabest 10 times
*
* Return: void here
*/

void print_alphabet_x10(void)

{
	int i = 0;

	for (i = 0; i <= 10; i++)
	{
		int alpha;

		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
		}
		_putchar(10);
	}
}
