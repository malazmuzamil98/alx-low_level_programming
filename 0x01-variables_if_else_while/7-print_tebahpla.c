#include <stdio.h>
/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');
	return (0);
}
