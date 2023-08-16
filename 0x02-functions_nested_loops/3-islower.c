#include "main.h"
#include <ctype.h>

/**
  * _islower - Function to check if letter is lowercase
  * @c: The character checked
  * Return: 1 if c is lowercase, 0 otherwise
  */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
