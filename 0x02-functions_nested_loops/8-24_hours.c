#include "main.h"

/**
  * jack_bauer - print every minute of day
  */
void jack_bauer(void)
{
	int a, b;

	a = 0;

	while (a < 24)
	{
		z = 0;

		while (z < 60)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((z / 10) + '0');
			_putchar((z % 10) + '0');
			_putchar('\n');
			z++;
		}
		a++;
	}
}
