#include "main.h"
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
			if (*argv[i] > 48 && *argv[i] < 58)
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
