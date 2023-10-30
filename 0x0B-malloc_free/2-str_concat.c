#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: string1
 * @s2: string2
 * Return: 0 or s3
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	len2 += len1;
	cat = malloc(sizeof(char) * (len2 + 1));
	if (cat == 0)
		return (0);
	for (len1 = 0; s1[len1] != '\0'; len1++)
		cat[len1] = s1[len1];
	for (len2 = 0; s2[len2] != '\0'; len1++, len2++)
		cat[len1] = s2[len2];
	cat[len1] = '\0';
	return (cat);
}
