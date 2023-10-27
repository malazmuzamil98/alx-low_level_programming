#include "main.h"
/**
 * isPure - a function checks if the argument is pure integer or not
 * @s: string argument
 * Return: 0 for success 1 for failer
*/
int isPure(char *s)
{
	int ck;

	for (ck = 0; s[ck] != '\0'; ck++)
	{
		if (s[ck] < '0' || s[ck] > '9')
		{
			return (1);
		}
	}
	return (0);
}
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: a pointer of array arguments
 * Return: nothing
*/
int main(int argc, char *argv[])
{
	int i, sum;

	i = 1;
	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		sum = 0;
		while (i < argc)
		{
			if (isPure(argv[i]) == 0)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
