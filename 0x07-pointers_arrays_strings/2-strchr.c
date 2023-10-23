#include "main.h"

/**
  * _strchr - a function that locates a character in a string
  *
  * @s: the string
  *
  * @c: the character
  *
  * Return: a pointer to the first occurrence of character
  */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c)
	{
		if (s[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s + i);

}
