#include "main.h"
/**
  * _strpbrk - a function that searches a string for a set of bytes
  *
  * @s: first string
  *
  * @accept: second string
  *
  * Return: a pointer to the byte in s
  */
char *_strpbrk(char *s, char *accept)
{
	int x = 0;

	char *p;

	while (s[x] != '\0')
	{
		int y = 0;

		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				p = &s[x];
				return (p);
			}
			y++;
		}
		x++;
	}
	return (0);
}
