#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * Return: Nothing
*/
void print_all(const char * const format, ...)
{
	int arg_num;
	int i, j;
	va_list all;

	arg_num = strlen(format);
	i = 0;
	va_start(all, format);
	while (i < arg_num)
	{
		j = 1;
		handle_format(format[i], &all, &j);
		if (j != 0 && i < arg_num - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(all);
}
