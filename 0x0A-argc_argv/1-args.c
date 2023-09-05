#include <stdio.h>
#include <stdlib.h>
/**
  * main - a program that prints the number of arguments passed into it
  * @argc: argument count
  * @argv: argument vector
  * Return: int value
  */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
