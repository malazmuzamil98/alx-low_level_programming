#include "main.h"
/**
  * _memset - Entry point to the function
  *
  * @s: a pointer to the array
  *
  * @b: the value to set
  *
  * @n: the bytes of the memory to be filled
  *
  * Return: a pointer to the memory
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
