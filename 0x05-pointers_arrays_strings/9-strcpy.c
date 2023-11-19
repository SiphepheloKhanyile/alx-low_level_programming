#include "main.h"
/**
  * _strcpy- copies the string
  * @dest: destination
  * @src: source
  * Return: dest
  */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
