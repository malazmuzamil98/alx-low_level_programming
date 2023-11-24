#include "variadic_functions.h"
/**
 * print_numbers - a function that prints all its parameters.
 * @separator: string to be printed
 * @n: number of argument
 * Return: Nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x;
	unsigned int i;
	va_list num;

	va_start(num, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		x = va_arg(num, int);
		printf("%d", x);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}

