#include "main.h"

/**
  * print_rev - a function that prints a string, in revers
  * @s: reversd string
  *
  * Return: void.
  */
void print_rev(char *s)
{
	int i, count;

	if (*s != '\0')
	{
		count = 0;
		while (*(s + count) != '\0')
		{
			count++;
		}
		for (i = count - 1; i >= 0; i--)
		{
			_putchar(*(s + i));
		}
		_putchar('\n');
}
