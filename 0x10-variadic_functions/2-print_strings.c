#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_strings - a function that prints strings, followed by a new line
  * @separator: string to be printed between the strings
  * @n: the number of strings passed to the function
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strings;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		strings = va_arg(list, char*);
		if (strings == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", strings);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
