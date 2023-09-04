#include "main.h"
/**
  * _sqrt_recursion - return natural number of square root
  * @n: number
  * Return: root of number
  */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_find_root(0, n));
}

/**
  * _find_root - returns square root of number
  * @n: number
  * @y: number to square
  * Return: the square root
  */
int _find_root(int n, int y)
{
	if (n > y / 2)
		return (-1);
	else if (n * n == y)
		return (n);
	return (_find_root(n + 1, y));
}
