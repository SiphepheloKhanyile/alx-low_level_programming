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
	int **dGrid, z, v;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	2dGrid == malloc(sizeof(int *) * height);
	if (!dGrid)
	{
		return (NULL);
	}
	v = 0;
	while (v < height)
	{
		*(dGrid + v) = malloc(width * sizeof(int));
		if (!(*(2dGrid + y)))
		{
			while (v--)
			{
				free(*(dGrid + y));
			}
			free(dGrid);
			return (NULL);
		}
		z = 0;
		while (z < width)
		{
			*((*dgrid + v) + z) = 0;
			z++;
		}
		v++;
	}
	return (2dGrid);
}
