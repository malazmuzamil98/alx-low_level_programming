#include "main.h"
/**
  * _strspn - function that gets th length of a prefix substring
  *
  * @s: first string
  *
  * @accept: second string
  *
  * Return: number of bytes in the initial segment.
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*accept != '\0')
	{
		char *temp = s;

		while (*temp != '\0')
		{
			if (*accept == *temp)
			{
				i++;
				break;
			}
			temp++;
		}
		accept++;
	}
	return (i);
}
