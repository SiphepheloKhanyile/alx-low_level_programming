#include <stdio.h>

/**
  * main- a program to print letters in reverse
  * Return: 0
  */
int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
