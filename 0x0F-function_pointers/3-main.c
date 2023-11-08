#include <stdio.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: Nothing
*/
int main(int argc, char **argv)
{
	int a, b;
	int (*check_op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	check_op = get_op_func(argv[2]);
	if (!check_op)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", check_op(a, b));
	return (0);
}
