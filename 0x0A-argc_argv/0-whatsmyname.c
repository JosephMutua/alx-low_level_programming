#include <stdio.h>

/**
 * main - prints the value in the argv
 * @argc: the number of values in argv
 * @argv: the values entired in the command line during execution.
 *
 * Return: 0 on sucess.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
