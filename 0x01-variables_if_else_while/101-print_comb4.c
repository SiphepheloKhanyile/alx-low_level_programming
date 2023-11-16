#include <stdio.h>
/**
  * main -prints all possible different combinations of three digits
  * Return: 0
  */
int main(void)
{
	int num1 = 0;
	int num2;
	int num3;

	while (num1 < 8)
	{
		num2 = num1 + 1;
		while (num2 < 10)
		{
			num3 = num2 + 1;
			while (num3 < 10)
			{
				putchar('0' + num1);
				putchar('0' + num2);
				putchar('0' + num3);
				if (num1 < 7 || num2 < 8 || num3 < 8)
				{
					putchar(',');
					putchar(' ');
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
