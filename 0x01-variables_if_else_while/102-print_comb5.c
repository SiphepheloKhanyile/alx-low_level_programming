#include <stdio.h>
/**
  * main - prints all possible combinations of two two-digit numbers
  * Return: 0
  */
int main(void)
{
	int num1 = 0;
	int num2;

	while (num1 <= 99)
	{
		num2 = num1 + 1;
		
		while (num2 <= 99)
		{
			putchar('0' + num1 / 10);
			putchar('0' + num2 % 10);
			putchar(' ');
			putchar('0' + num2 / 10);
			putchar('0' + num2 % 10);
			if (num1 < 98 || num2 < 99)
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
