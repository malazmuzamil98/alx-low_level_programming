#include "lists.h"
void before_main(void) __attribute__((constructor));
/**
 * print_list - prints all elements
 * @h: head
 * Return: count
*/
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}