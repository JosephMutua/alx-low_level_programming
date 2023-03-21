#include "main.h"
/**
 * _isalpha - checks if a char is alphabet.
 *
 *@c: the char being checked.
 *
 * Return: sucess 1 fail 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
