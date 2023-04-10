#include <stdio.h>

/**
 * main - prints all the arg vectors
 * @argc: the number of argv
 * @argv: an array of all arguements.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
