#include "dog.h"

/**
 * init_dog -  a function that initialize a variable of type struct
 * @d: structure pointer
 * @name: structure member 1
 * @age: structure member 2
 * @owner: structure member 3
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
