#include <stdlib.h>
#include <stdio.h>
/**
  * main - a program that prints the minimum number of coins to make change
  * @argc: argument count
  * @argv: argument vector
  * Return: int value
  */
int main(int argc, char *argv[])
{
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins;
	int i, count = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	numCoins = sizeof(coins) / sizeof(coins[0]);
	for (i = 0; i < numCoins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
