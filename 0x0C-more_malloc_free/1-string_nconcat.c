#include "main.h"
#include <stdlib.h>
/**
  * string_nconcat - a function that concatenates two strings.
  * @s1: string 1
  * @s2: string 2
  * @n: length of string
  * Return: concatenated string pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i, s1Size = 0, s2Size = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + s1Size) != '\0')
	{
		s1Size++;
	}
	while (*(s2 + s2Size) != '\0')
	{
		s2Size++;
	}
	if (s2Size >= n)
	{
		s2Size = n;
	}
	string = malloc(s1Size + n + 1);
	if (string == NULL)
	{
		return (string);
	}
	for (i = 0; i < s1Size; i++)
	{
		string[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		string[i + s1Size] = s2[i];
	}
	string[s1Size + i] = '\0';
	return (string);
}
