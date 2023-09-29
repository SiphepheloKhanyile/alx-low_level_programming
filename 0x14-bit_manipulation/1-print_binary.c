#include "main.h"
/**
  * print_binary - prints the binary representation of a number.
  * @n: number to be printed
  * Return: Void
  */
void print_binary(unsigned long int n)
{
	int shift;
	int started = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (shift = sizeof(unsigned long int) * 8 - 1; shift >= 0; shift--)
	{
		unsigned long int mask = 1UL << shift;

		if (n & mask)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}
	}
}
