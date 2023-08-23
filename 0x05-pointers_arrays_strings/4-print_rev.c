#include "main.h"

/**
  * print_rev - a function that prints a string, in revers
  * @s: reversd string
  *
  * Return: void.
  */
void print_rev(char *s)
{
	int a, counter;

	if (*s != '\0')
	{
		counter = 0;
		while (*(s + counter) != '\0')
		{
			counter++;
		}
		for (a = counter - 1; a >= 0; a--)
		{
			_putchar(*(s + a));
		}
	}
		_putchar('\n');
}
