#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcat - concatenates src string to dest string
 *
 * @dest: string one
 * @src: string two
 *
 * Return:  (Success)
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	char *result;

	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
		len2++;

	result = (char *)malloc(len1 + len2 + 1);

	for (i = 0; i < len1; i++)
		result[i] = dest[i];

	for (i = 0; i < len2; i++)
	{
		result[len1 + i] = src[i];
		dest[len1 + i] = src[i];
	}

	result[len1 + len2] = '\0';
	dest[len1 + len2] = '\0';

	return (result);
}
