#include "main.h"
/**
  * puts2 - a function that prints every other character of a string
  * @str: input string
  * Return: void
  */
void puts2(char *str)
{
	int a;

	a = 0;
	while (*(str + a) != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(*(str + i));
		}
		a++;
	}
	_putchar('\n');
}
