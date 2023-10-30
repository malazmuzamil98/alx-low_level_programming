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
	char *cat;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	cat = malloc((len1 + len2 + 1) * sizeof(char));

	if (cat == 0)
	{
		return (0);
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
