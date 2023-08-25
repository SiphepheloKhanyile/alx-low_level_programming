#include "main.h"
#include <string.h>
/**
  * _strncat - a function that concatenates two strings.
  * @dest: string 1
  * @src: string 2
  * @n: max number of characters
  * Return: dest concatenated
  */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
