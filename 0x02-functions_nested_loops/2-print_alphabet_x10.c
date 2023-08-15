#include "main.h"

/**
  * print_alphabet_x10 -print the alphabets 10 times
  * Return: void
  */
void print_alphabet_x10(void)
{
	int l;
	char k;

	for (l = 0; l < 10; l++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
