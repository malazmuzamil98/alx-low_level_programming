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

	number = 48;

	while (number < 58)
	{
		putchar(number);
		number++;
	}
	putchar(10);
	return (0);
}
