#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  * new_dog -  a function that creates a new dog.
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  * Return: pointer to new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dog = malloc(sizeof(dog_t));

	if (_dog == NULL)
	{
		return (NULL);
	}
	_dog->name = malloc(strlen(name) + 1);
	if (_dog->name == NULL)
	{
		free(_dog);
		return (NULL);
	}
	_dog->owner = malloc(strlen(owner) + 1);
	if (_dog->owner == NULL)
	{
		free(_dog->name);
		free(_dog);
		return (NULL);
	}
	strcpy(_dog->name, name);
	strcpy(_dog->owner, owner);
	_dog->age = age;
	return (_dog);
}
