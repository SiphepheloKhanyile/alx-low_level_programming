#include "main.h"
#include <string.h>
/**
  * _strcmp - a function that compares two strings.
  * @s1: string 1
  * @s2: string 2
  * Return: 0 for true, - if lex is  < 0 and + if lex 0 >
  */
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
