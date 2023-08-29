#include "main.h"
#include <stddef.h>
/**
  * _strchr - a function that locates a character in a string.
  * @s: input string
  * @c: character being searched
  *
  * Return: pointer at occurrance of char c else NULL
  */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
		return (NULL);
}
