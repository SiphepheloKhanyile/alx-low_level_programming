#include "main.h"

/**
  * print_triangle -  a function that prints a triangle
  * @size: size of the triangle
  * Return: void
  */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			_putchar((a < size -1) ? ' ' : '#');
		}
		_putchar('\n');
		size--;
	}
}
