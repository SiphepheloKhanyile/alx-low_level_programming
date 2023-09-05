#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - a program that adds positive numbers.
  * @argc: argument count
  * @argv: argument vector
  * Return: 1 for error otherwise 0
  */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, number;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *input = argv[i];

		for (j = 0; input[j] != '\0'; j++)
		{
			if (!isdigit(input[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		number = atoi(input);
		sum += number;
	}
		printf("%d\n", sum);
		return (0);
}
