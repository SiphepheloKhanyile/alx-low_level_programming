#include "main.h"
/**
  * factorial - a function that returns the factorial of a given number.
  * @n: Given number
  * Return: if n < 0 return -1 otherwise fact of num
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
