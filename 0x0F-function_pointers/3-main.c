#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code.
 * @argc: the count of elements in argv
 * @argv: elements added during runtime.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	char *c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = argv[2];

	if (((*c == '/') || (*c == '%')) && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	if (!(get_op_func(c)))
	{
		printf("Error\n");
		exit(99);
	}
	result = (get_op_func(c))(a, b);
	printf("%d\n", result);

	return (0);
}

