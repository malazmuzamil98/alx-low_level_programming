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

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	
	return (0);
}
