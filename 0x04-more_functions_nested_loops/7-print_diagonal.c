#include "main.h"

/**
  * print_diagonal - a function that draws a diagonal line on the terminal.
  * @n: number of times line should be printed
  * Return: void
  */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
