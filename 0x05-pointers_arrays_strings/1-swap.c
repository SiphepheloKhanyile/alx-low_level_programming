#include "main.h"

/**
  * swap_int - a function that swaps the values of two integers.
  * @a: integer 1 to be swapped
  * @b: integer 2 to be swapped
  *
  * Return: void.
  */
void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;
	*b = p;
}
