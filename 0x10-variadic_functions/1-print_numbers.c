#include "variadic_functions.h"
/**
 * print_numbers - a function that returns the sum of all its parameters.
 * @separator: string to be printed
 * @n: number of argument
 * Return: Nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x;
	unsigned int i;
	va_list num;

	if (n == 0)
		return;
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			return;
		x = va_arg(num, int);
		printf("%d", x);
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");
}

