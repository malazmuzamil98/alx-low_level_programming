#include "variadic_functions.h"
/**
 * handle_format - a function that handles the format
 * @format: the format
 * @all: a list of types of arguments passed to the function
 * @flag: a flag to examine the format
 * Return: Nothing
*/
void handle_format(char format, va_list *all, int *flag)
{
	char x;
	int num;
	double f;
	char *s;

	switch (format)
	{
		case 'c':
		{
			x = (va_arg(*all, int));
			printf("%c", x);
			break;
		}
		case 'i':
		{
			num = (va_arg(*all, int));
			printf("%i", num);
			break;
		}
		case 'f':
		{
			f = (va_arg(*all, double));
			printf("%f", f);
			break;
		}
		case 's':
		{
			s = (va_arg(*all, char*));
			if (s == NULL)
			{
				s = "(nil)";
			}
			printf("%s", s);
			break;
		}
		default:
		{
			*flag = 0;
		}
	}
}
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

	if (format == NULL)
	{
		printf("\n");
		return;
	}
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
