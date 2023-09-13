#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
  * free_dog - function to free memory
  * @d: to be freed
  * Return: void
  */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
