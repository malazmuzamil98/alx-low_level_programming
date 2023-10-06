#include <stdio.h>
/**
 * main - print last digit in random number
 *
 * Description: print last digit in random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
