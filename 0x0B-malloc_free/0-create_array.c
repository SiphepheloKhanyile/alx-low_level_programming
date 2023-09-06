#include <stdlib.h>
#include "main.h"
/**
  * create_array -  a function that creates an array of chars
  * @size: size of array
  * @c: characters
  * Return: character
  */
char *create_array(unsigned int size, char c)
{
	char *arrayChar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arrayChar = malloc(size * sizeof(char));
	if (arrayChar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arrayChar[i] = c;
	}
	return (arrayChar);
}
