#include "main.h"

/**
  * rev_string - a function that reverses a string.
  * @s: reversed string
  * Return: void.
  */
void rev_string(char *s)
{
	char swapper;
	int a, counter;

	counter = 0;
	while (*(s + counter) != '\0')
	{
		counter++;
	}
	a = 0;
	counter = counter - 1;
	while (a <= counter)
	{
		swapper = *(s + a);
		*(s + a) = *(s + counter);
		*(s + counter) = swapper;
		a++;
		counter--;
	}
}
