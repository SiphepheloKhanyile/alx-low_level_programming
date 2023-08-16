#include "main.h"
#include <ctype.h>

/**
  * _isalpha - Check if entered text is an alphabet
  * @c: The character checked
  * Return: 1 if c is a letter, 0 otherwise.
  */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
