#include "main.h"
/**
  * _strstr - a function that locates a substring
  *
  * @haystack: the string
  *
  * @needle: the substring
  *
  * Return: a pointer to the beginning of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
	int x = 0;

	char *p;

	while (needle[x] != '\0')
	{
		int y = 0;

		while (haystack[y] != 0)
		{
			if (needle[x] == haystack[y])
			{
				p = &haystack[y];
				return (p);
			}
			y++;
		}
		x++;
	}
	return (NULL);
}
