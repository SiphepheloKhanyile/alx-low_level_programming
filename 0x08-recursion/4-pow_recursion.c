#include "main.h"
/**
  * _pow_recursion - a func to return the value of x raised to the power of y.
  * @x: number to be raised
  * @y: power
  * Return: power or -1 if y < 0
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
