#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
  * stringLength - get string length
  * @x: string input
  * Return: string length
  */
int stringLength(char *x)
{
	int length = 0;

	while (*x)
	{
		x++;
		length++;
	}
	return (length);
}

/**
  * str_concat - a function that concatenates two strings.
  * @s1: string 1
  * @s2: STRING 2
  * Return: pointer to concatednated string
  */
char *str_concat(char *s1, char *s2)
{
	char *conc, *conc2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	conc = malloc(sizeof(char) * (stringLength(s1) + stringLength(s2)) + 1);
	if (!conc)
	{
		return (NULL);
	}
	conc2 = conc;
	while (*s1)
	{
		*conc2 = *s1;
		conc2++;
		s1++;
	}
	while (*s2)
	{
		*conc2 = *s2;
		conc2++;
		s2++;
	}
	*conc2 = '\0';
	return (conc);
}
