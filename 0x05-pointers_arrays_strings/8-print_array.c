#include "main.h"
#include <stdio.h>
/**
  * print_array - a function that prints n elements of an array of integers
  * @a: integer 1
  * @n: integer 2
  * Return: 0
  */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b == n - 1)
			printf("%d", a[b]);
		else
			printf("%d, ", a[b]);
	}
	_putchar('\n');
}
