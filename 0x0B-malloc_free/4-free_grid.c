#include <stdlib>
#include "main.h"
/**
  * free_grid - function to free memery
  * @grid: input
  * @height: 2nd input
  * Return: void
  */
void free_grid(int **grid, int height)
{
	int a;

	while (a < height)
	{
		free(grid[i]);
		a++;
	}
	free(grid);
}
