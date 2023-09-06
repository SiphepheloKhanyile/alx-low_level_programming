#include <stdlib.h>
#include "main.h"
/**
  * _strdup - return a pointer to newly allocated spaace in memory
  * @str: string
  * Return: pointer to duplicated string
  */
char *_strdup(char *str)
{
	size_t len = 0;
	size_t i;
	char *dupli;

	if (str == NULL)
	{
		return  (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	dupli = malloc((len + 1) * sizeof(char));
	if (dupli == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		dupli[i] = str[i];
	}
	return (dupli);
}
