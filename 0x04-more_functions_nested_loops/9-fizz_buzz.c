#include <stdio.h>
#include "main.h"

/**
  * main - program to print fizzbuzz
  * Description: prints the numbers from 1 to 100 along with fizz and buzz
  * Return: 0
  */
int main(void)
{
	int a;

	for (a = 1; a <= 99; a++)
	{
		if (a % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("Buzz\n");
	return (0);
}
