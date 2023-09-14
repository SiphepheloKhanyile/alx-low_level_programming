#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>
/**
  * print_all - a function that prints anything.
  * @format:list of types of arguments passed to the function
  * Return: void
  */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	int i = 0;
	char cur_char;

	va_start(args, format);
	while (format && format[i])
	{
		cur_char = format[i];
		switch (cur_char)
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, (float)va_arg(args, double));
				break;
			case 's':
				{
					char *str = va_arg(args, char *);

					if (str == NULL)
					{
						str = "(nil)";
					}
					printf("%s%s", separator, str);
					break;
				}
			default:
				break;
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
