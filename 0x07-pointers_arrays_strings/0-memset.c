#include "main.h"
/**
  * _memset - a function that fills memory with a constant byte
  * @s: pointer
  * @b: constant byte
  * @n: first "n" bytes to be filled
  * Return: pointer
  */
char *_memset(char *s, char b, unsigned int n)
{
	char *pointer = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*pointer = b;
		pointer++;
	}
	return (s);
}
