#include <stdio.h>
/**
  * main - prints all possible different combinations of two digits
  * Return: 0
  */
int main(void)
{
	int num1 = 0;
	int num2;

	while (num1 < 9)
	{
		num2 = num1 + 1;
		while (num2 < 10)
		{
			putchar('0' + num1);
			putchar('0' + num2);
			if (num1 < 8 || num2 < 9)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
