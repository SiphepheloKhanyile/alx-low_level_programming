#include "main.h"
#include <string.h>

/**
  * _strcat - a function that concatenates two strings.
  * @dest: string 1
  * @src: string 2
  * Return: dest concatenated
  */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
