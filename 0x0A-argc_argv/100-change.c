#include "main.h"
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: a pointer of array arguments
 * Return: nothing
*/
int main(int argc, char *argv[])
{
	int i, value, cents;
	int coins[] = {25, 10, 5, 2, 1};

	i = cents = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	while (value > 0 && i < 5)
	{
		cents += value / coins[i];
		value = value % coins[i];
		i++;
	}
	printf("%d\n", cents);
	return (0);
}
