#include "3-calc.h"
/**
 * op_add - a function that adds two numbers
 * @a: first number
 * @b:second number
 * Return: a + b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - a function that subtracts two numbers
 * @a: first number
 * @b:second number
 * Return: a - b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - a function that multiplies two numbers
 * @a: first number
 * @b:second number
 * Return: a * b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - a function that divides two numbers
 * @a: first number
 * @b:second number
 * Return: a / b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a / b);
}
/**
 * op_mod - a function that calculates the reminder
 * @a: first number
 * @b:second number
 * Return: a % b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a % b);
}
