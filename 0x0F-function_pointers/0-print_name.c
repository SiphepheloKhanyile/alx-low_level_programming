#include "function_pointers.h"
#include <stddef.h>
/**
  * print_name - Function that prints a name
  * f - pointer function
  * @name: name
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
