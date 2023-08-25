#include "main.h"
/**
  * reverse_array- a function that reverses the content of an array of integers
  * @a: iput integers
  * @n: length
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
