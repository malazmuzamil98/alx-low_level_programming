#include "main.h"
/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the string
*/
char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int i, j;
	char *cat = (char *)malloc(((len1 + len2) * sizeof(char)) + 1);

	if (s1 == NULL)
	{
		return (s2);
	}
	else if (s2 == NULL)
	{
		return (s1);
	}
	if (s1 == NULL && s2 == NULL)
	{
		return (0);
	}
	if (cat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		cat[i] = s1[i];
	}
	for (j = i; j < (len1 + len2); j++)
	{
		cat[j] = *s2;
		s2++;
	}
	cat[j] = '\0';
	return (cat);
}
