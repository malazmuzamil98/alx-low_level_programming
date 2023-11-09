#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: fixed argument
 * Return: sum of all its parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	while (n)
	{
		int sum;
		unsigned int i;

		va_list args;

		va_start(args, n);
		sum = 0;
		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}
		va_end(args);
		return (sum);
	}
	return (0);
}
