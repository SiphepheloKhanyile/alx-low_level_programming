#include "main.h"
/**
  * _calloc - a function that allocates memory for an array, using malloc.
  * @nmemb: array
  * @size: size of array
  * Return: void
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pointer = alloc(nmemb * size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < (nmemb * size);  a++)
	{
		pointer[a] = 0;
	}
	return (pointer);
}
