#include "main.h"
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: a pointer of array arguments
 * Return: nothing
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	int result;

	result = 1;
	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
	}
	return (0);
}
