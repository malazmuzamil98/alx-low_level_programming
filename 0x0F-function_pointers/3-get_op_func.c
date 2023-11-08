#include "3-calc.h"
/**
 * get_op_func - a function pointer
 * @s: operator passed
 * Return: operator result
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (ops[i].op[0] == *s && strlen(s) == 1)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (0);
}
