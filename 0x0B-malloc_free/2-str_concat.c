#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
  * str_concat - a function that concatenates two strings.
  * @s1: string 1
  * @s2: STRING 2
  * Return: pointer to concatednated string
  */
char *str_concat(char *s1, char *s2)
{
	size_t length1;
	size_t length2;
	char *conc;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length1 = strlen(s1);
	length2 = strlen(s2);
	conc = malloc((length1 + length2 + 1) * sizeof(char));
	if (conc == NULL)
	{
		return (NULL);
	}
	strcpy(conc, s1);
	strcpy(conc, s2);
	return (conc);
}
