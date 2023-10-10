#include "main.h"
/**
 * print_last_digit - entry point
 *
 * Description: function that prints the last digit of a number.
 *
 * @d:number to compute last digit
 *
 * Return: last digit
 */
int print_last_digit(int d)
{
	int ldigit;

	ldigit = d % 10;
	if (ldigit < 0)
	{
		ldigit = ldigit * -1;
	}
	_putchar(ldigit + '0');
	return (ldigit);
}
