#include "main.h"
/**
  * is_palindrome - a function that returns 1 if a string is palindrome
  * @s: string
  * Return: 1 for true ,otherwise 0
  */
int is_palindrome(char *s)
{
	int ind = 0;
	int leng = find_len(s);

	if (!(*s))
		return (1);
	return (check_pali(s, leng, ind));
}

/**
  * find_len - for string length
  * @s: string input
  * Return: Length of string
  */
int find_len(char *s)
{
	int leng = 0;

	if (*(s + leng))
	{
		leng++;
		leng += find_len(s + leng);
	}
	return (leng);
}

/**
  * check_pali - check if string is palindrome
  * @s: input string
  * @leng: string length
  * @ind: inde of string
  * Return: 1 for palindrome , otherwise 0.
  */
int check_pali(char *s, int leng, int ind)
{
	if (s[ind] == s[leng / 2])
	{
		return (1);
	}
	if (s[ind] == s[leng - ind - 1])
	{
		return (check_pali(s, leng, ind + 1));
	}
	return (0);
}
