#include "main.h"

/**
  * print_sign - a function that prints the sign of a number.
  * @n: The checked variable
  * Return: 1 or 0 depending on output
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
