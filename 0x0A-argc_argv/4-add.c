#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds two numbers
 * @argc: the number of values in argv
 * @argv: the command line arguments
 *
 * Return: 0 on success and 1 on Error.
 */
int main(int argc, char *argv[])
{
	int i, k, sum;
	
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			for (k = 0; argv[i][k] != '\0'; k++)
			{
				if (argv[i][k] < '0' || argv[i][k] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		else
		{
			for (k = 0; argv[i][k] != '\0'; k++)
			{
				if (argv[i][k] < '0' || argv[i][k] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
