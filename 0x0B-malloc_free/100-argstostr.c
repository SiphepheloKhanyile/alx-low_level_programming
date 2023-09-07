#include <stdlib.h>
#include "main.h"
/**
  * stringL - retrieve length of string
  * @a: string
  *Return: Length of string
  */
int stringL(char *a)
{
	int x;

	x = 0;
	while (a[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
  * argstostr -  function that concatenates all the arguments of program
  * @ac: argument count
  * @av: argument vector
  * Return: pointer to new string
  */
char *argstostr(int ac, char **av)
{
	char *string;
	int a, b, c, lent;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		lent = lent + (stringL(av[a]) + 1);
	}
	string = malloc(sizeof(char) *  lent + 1);
	if (string == NULL)
	{
		return (NULL);
	}
	c = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; b < stringL(av[a]); b++)
		{
			string[c] = av[a][b];
			c++;
		}
		string[c] = '\n';
		c++;
	}
	string[c] = '\0';
	return (string);
}
