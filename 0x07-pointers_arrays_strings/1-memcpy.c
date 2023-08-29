#include "main.h"
/**
  * _memcpy - a function that copies memory area.
  * @dest: variable to copy memory at
  * @src: source
  * @n: number of bytes
  *
  * Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *source_ptr = src;
	char *dest_pointer = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest_pointer = *source_ptr;
		dest_pointer++;
		source_ptr++;
	}
	return (dest);
}
