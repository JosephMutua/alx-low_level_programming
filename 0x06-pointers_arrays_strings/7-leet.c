#include "main.h"

/**
 * leet - this function encodes the data.
 * @s: the string to be encoded
 *
 * Return: returns the encoded data
 */
char *leet(char *s)
{
	int j;
	char encodes[10][2] = {
		{'a', '4'},
		{'A', '4'},
		{'e', '3'},
		{'E', '3'},
		{'o', '0'},
		{'O', '0'},
		{'t', '7'},
		{'T', '7'},
		{'l', '1'},
		{'L', '1'}
	};
	while (*s != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (*s == encodes[j][0])
			{
				*s = encodes[j][1];
			}
		}
		s++;
	}
	return (s);
}
