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

	if (*str == 0 || str == NULL)
	{
		return (NULL);
	}
	new = (char *)malloc((len + 1) * sizeof(char));

	if (new == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			new[i] = str[i];
		}
		new[i] = '\0';
		return (new);
	}
}
