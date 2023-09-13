#include "dog.h"
#include <stddef.h>
/**
  * init_dog - a function that initialize a variable of type struct dog
  * @d: dog
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d->name != NULL)
	{
		d->name = name;
	}
	else
	{
		printf("Name: (nil)\n");
	}
	d->age = age;
	d->owner = owner;
}
