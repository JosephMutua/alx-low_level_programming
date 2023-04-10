#include <stdio.h>
#include <stdlib.h>

/**
 * findcoins - the function determines the nunber of coins to be returned as change
 * @cha: the value of change
 *
 * Return: the numeber of coins
 */
int findcoins(int cha)
{
	int num;
	int long unsigned i;
	int coins[] = {25, 10, 5, 2, 1};

	num = 0;
	for (i = 0; i < sizeof(coins); i++)
	{
		while ((cha / coins[i]))
		{
			cha = cha - coins[1];
			num++;
			i++;
		}
	}
	return (num);
}

/**
 * main - prints the minimum number of coins that make change for an amount of money.
 * @argc: the number of values stored in argv
 * @argv: the command line values.
 *
 * Return: 0 on success and 1 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
		}
	}
	printf("%d\n", findcoins(atoi(argv[1])));
	return (0);
}

