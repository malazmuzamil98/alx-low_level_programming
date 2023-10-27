#include "main.h"
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: a pointer of array arguments
 * Return: nothing
*/
int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		i = 1;
		while (i < argc)
	{
		if (*argv[i] != atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
			i++;
		}
	}
	printf("%d\n", sum);
	}
	return (0);
}
