#include "main.h"

int _putchar(char c);

/**
  * print_alphabet - Function to print lowercase alphabets
  * Return: void
  */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

