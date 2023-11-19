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
	int count = 0;

	while (count <= n)
	{
		if (a[count] != a[n - 1])
		{
			printf("%d, ", a[count]);
		}
		else
		{
			printf("%d\n", a[count]);
		}
		count++;
	}
}
