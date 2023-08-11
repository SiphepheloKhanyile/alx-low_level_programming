#include <stdio.h>

/**
  * main - a program that prints all single digit numbers of base 10
  * Return: 0
  */
int main(void)
{
	int i = 0;

	for (i = 0 ; i <= 9 ; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
