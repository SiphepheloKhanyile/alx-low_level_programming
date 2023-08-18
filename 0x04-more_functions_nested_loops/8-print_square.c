#include "main.h"

/**
  * print_square - a function that prints a square, followed by a new line
  * @size: is the size of the square
  * Return: void
  */
void print_square(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			int b;

			for (b = 0; b < (size); b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
