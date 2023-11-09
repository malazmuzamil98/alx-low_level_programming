#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: string to be printed
 * @n: number of argument
 * Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *x;
	unsigned int i;
	va_list str;

	if (n == 0)
		return;
	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			return;
		x = va_arg(str, char *);
		if (x == NULL)
			printf("nil");
		printf("%s", x);
		if (i <= n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
