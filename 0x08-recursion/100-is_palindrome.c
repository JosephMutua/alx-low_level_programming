#include "main.h"

/**
 * len - determines the length of the string
 * @s: the string
 *
 * Return: the length/
 */
int len(char *s)
{
	if (*s != '\0')
	{
		return (1 + len(s + 1));
	}
	else
		return (0);
}

/**
 * is_palindrome -  this function determines is a string is palindrome
 * @s: the string to be determined.
 *
 * Return: 1 if it is true and 0 when it is wrong.
 */
int is_palindrome(char *s)
{
	if (s[0] == s[len(s) - 1])
		return (1);
	else
		return (0);

	s[len(s) - 1]--;
	s[0]++;
	is_palindrome(s);
}
