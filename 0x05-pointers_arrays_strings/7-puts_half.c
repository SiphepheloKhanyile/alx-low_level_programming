#include "main.h"
/**
  * puts_half - a function that prints half of a string
  * @str: printed string
  * Return: void
  */
void puts_half(char *str)
{
	int a, len, hal;

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
		hal = len / 2;
	else
		hal = len - (len - 1) / 2;
	a = hal;
	if (len == 1)
		_putchar(*str);
	else
	{
		while (*(str + a) != '\0')
		{
			_putchar(*(str + a));
			a++;
		}
	}
	_putchar('\n');
}
