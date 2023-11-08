#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: the name
 * @f: a function pointer
 * Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return (NULL);
	(*f)(name);
}
