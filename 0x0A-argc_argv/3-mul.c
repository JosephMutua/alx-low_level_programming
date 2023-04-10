#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiples two numbers pass as command line argeuments
 * @argc: the number of argv
 * @argv: the values to be passed.
 *
 * Return: 0 on success and 1 on Error.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
		return (0);
	}
}
