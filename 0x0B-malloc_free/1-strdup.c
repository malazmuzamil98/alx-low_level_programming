#include "main.h"
/**
 * _strdup - function that returns a pointer to a new allocated space in memory
 * @str: string
 * Return: pointer to the string
*/
char *_strdup(char *str)
{
	unsigned int len = strlen(str);
	unsigned int i;
	char *new;

	if (str == 0)
	{
		return (NULL);
	}
	new = malloc((len * sizeof(char)) + 1);

	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		new[i] = str[i];
	}
	new[i] = '\0';
	return (new);
}
