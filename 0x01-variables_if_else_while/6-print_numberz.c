#include <stdio.h>

/**
  * main- using putchar to print single digits
  * Return: 0
  */
int main(void)
{
	int i = '0';

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
