#include <stdio.h>
/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';

	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
