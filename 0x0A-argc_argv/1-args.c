#include <stdio.h>

/**
 * main - prints the number of argv.
 * @argc: the number of argv
 * @argv: the list of arguments that passed in the command line.
 *
 * Return: O on success.
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
