#include "main.h"
/**
  * _strlen - a function returns string length
  *
  * @s: char parameter
  *
  * Return: strl value..
  */
int _strlen(char *s)
{
	int strl;

	for (strl = 0; *s != '\0'; s++)
		strl++;
	return (strl);
}
