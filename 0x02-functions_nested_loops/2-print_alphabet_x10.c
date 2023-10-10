#include "main.h"
/**
* print_alphabet_x10 - prints the alphabet 10 times
*
* print_alphabet - prints alphabet in lower case
*
* Return: Always 0
*/

void print_alphabet(void);

void print_alphabet_x10(void)

{
	int i = 0;

	for (i = 0; i <= 10; i++)
	{
	print_alphabet();
	}
}
void print_alphabet(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		_putchar(alpha);
	}
	_putchar(10);
}
