#include <ctype.h>
#include "main.h"

/**
  * _isupper -  a function that checks for uppercase character.
  * @c: checked character
  * Return: 1 if successful 0 otherwise
  */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
