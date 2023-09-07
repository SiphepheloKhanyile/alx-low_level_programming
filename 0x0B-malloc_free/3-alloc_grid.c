#include <stdlib.h>
#include "main.h"
/**
  * alloc_grid - function that returns a pointer to a 2 dimensional array
  * @width: colomn
  * @height: rows
  * Return: NULL n failure otherwise pointer to 2d array
  */
int **alloc_grid(int width, int height)
{
	int **var, z, v;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	var == malloc(sizeof(int *) * height);
	if (!var)
	{
		return (NULL);
	}
	v = 0;
	while (v < height)
	{
		*(var + v) = malloc(width * sizeof(int));
		if (!(*(var + v)))
		{
			while (v--)
			{
				free(*(var + v));
			}
			free(var);
			return (NULL);
		}
		z = 0;
		while (z < width)
		{
			*((*var + v) + z) = 0;
			z++;
		}
		v++;
	}
	return (var);
}
