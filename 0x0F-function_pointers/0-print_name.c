#include "function_pointers.h"
/**
  * print_name - Function that prints a name
  * f - pointer function
  * @name: name
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
