#include "function_pointers.h"
#include <stddef.h>
/**
  * array_iterator - executes a function given as a parameter
  * @size: size of array
  * @array: array
  * @action: is a pointer to the function
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
