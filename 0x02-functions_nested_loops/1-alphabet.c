#include "main.h"

/**
 * print_alphabet - A program that prints alphabet in lower case.
 *
 * Description: using the header file main.h
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int alpha;

		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
		}
		_putchar(10);
}

