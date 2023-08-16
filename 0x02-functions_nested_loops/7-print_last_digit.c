#include "main.h"

/**
  * print_last_digit -  a function that prints the last digit of a number.
  * @x: passed number
  * Return: value of digit
  */
int print_last_digit(int x)
{
	int z;

	if (x < 0)
	{
		x = -x;
		z = x % 10;
	}
	else
	{
		z = x % 10;
	}
	if (z < 0)
		z = -z;
	_putchar(z + '0');
	return (z);
}

