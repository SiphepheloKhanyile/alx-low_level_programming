#include "main.h"

/**
  * print_line - a function that draws a straight line in the terminal.
  * @n: number of dashes
  * Return: void
  */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
