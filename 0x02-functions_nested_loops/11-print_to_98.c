#include "main.h"
#include <stdio.h>

/**
  *print_to_98 - a function that prints all natural numbers from n to 98
  *@v: passed num
  * Retur: void
  */
void print_to_98(int v)
{
	if (v <= 98)
	{
		for (v = v; v <= 97; v++)
		{
			printf("%d, ", v);
		}
	}
	else
	{
		for (v = v; v > 98; v--)
		{
				printf("%d, ", v);
		}
	}
	printf("98\n");
}
