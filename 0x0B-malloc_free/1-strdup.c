#include "main.h"
/**
 * _strdup - function that returns a pointer to a new allocated space in memory
 * @str: string
 * Return: pointer to the string
*/
char *_strdup(char *str)
{
	int len = strlen(str);
	int i;
	char *new = (char *)malloc((len * sizeof(char)) + 1);

	if (len == 0)
	{
		return (NULL);
	}
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		new[i] = str[i];
	}
	return (new);
}
