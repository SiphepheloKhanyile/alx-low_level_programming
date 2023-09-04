#include "main.h"
/**
  * is_prime_number - func to retunrn 1 if num is prime
  * @n:checked number
  * Return: 1 for prime, otherwise 0
  */
int is_prime_number(int n)
{
	int st = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	return (for_prime(n, st));
}

/**
  * for_prime - return 1 for prime num
  * @n: number checked
  * @st: number to start checking from
  * Return: 1 for prime 0 otherwise
  */
int for_prime(int n, int st)
{
	if (st <= 1)
	{
		return (1);
	}
	else if (n % st == 0)
	{
		return (0);
	}
	return (for_prime(n, st - 1));
}
