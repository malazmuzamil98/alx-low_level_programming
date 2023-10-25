#include "main.h"
/**
*  power - checks if an integer is the square root of a number
* @n: a number
* @i: integar
* Return: square root of the number
*/
int power(int n, int i)
{
	if (n == i * i)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (power(n, i + 1));
}
/**
 * _sqrt_recursion - a function that returns the natural square root of number
 * @n: a number
 * Return: a number
*/
int _sqrt_recursion(int n)
{
	return (power(n, 1));
}
