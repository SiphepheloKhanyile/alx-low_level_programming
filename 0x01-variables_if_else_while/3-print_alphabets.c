#include <stdio.h>

/**
  * main- program to print lower then uppercase letters
  * Return: 0
  */
int main(void)
{
	char u;
	char l;

	for (u = 'a' ; u <= 'z' ; u++)
	{
		putchar(u);
	}
	for (l = 'A' ; l <= 'Z' ; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
