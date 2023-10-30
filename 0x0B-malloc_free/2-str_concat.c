#include "main.h"
/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the string
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *cat;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}
	cat = malloc((len1 + len2 + 1) * sizeof(char));

	if (cat == 0)
	{
		return (0);
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		cat[len1] = s1[len1];
	}
	for (len2 = 0; *s2 != '\0' ; len2++)
	{
		cat[len1] = *s2;
		s2++;
	}
	cat[len1] = '\0';
	return (cat);
}
