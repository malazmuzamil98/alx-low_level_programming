#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of s2 chars to concat
 * Return: a pointer to the allocated memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len1, len2;
	char *conc;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	conc = malloc((len1 + len2 + 1) * sizeof(char));
	if (conc == NULL)
	{
		return (NULL);
	}
	conc = str_concat(conc, s1);
	j = 0;
	for (i = len1; j < n; i++)
	{
		conc[i] = s2[j];
		j++;
	}
	return (conc);
}
