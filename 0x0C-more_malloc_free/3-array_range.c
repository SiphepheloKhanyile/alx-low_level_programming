#include <stdlib.h>
#include "main.h"
/**
  * array_range - a function that creates an array of integers.
  * @min: values
  * @max: value
  * Return:pointer to array
  */
int *array_range(int min, int max)
{
	int a,b;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	b = max - min + 1;
	arr = malloc(sizeof(int) * b);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (a = min; a <= max; a++)
	{
		arr[a - min] = a;
	}
	return (arr);
}
