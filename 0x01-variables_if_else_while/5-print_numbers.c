#include <stdio.h>
/**
 * main - print single digit numbers
 *
 * Description: print single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	number = 0;

	while (number < 10)
	{
		putchar(number);
		number++;
	}
	return (0);
}
