#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that prints the minimum number of coins to
 * make change for an amount of money.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int n, result;
	int i = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	result = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	while (i < 5 && n >= 0)
	{
		while (n >= coins[i])
		{
			result++;
			n = n - coins[i];
		}
		i++;
	}

	printf("%d\n", result);
	return (0);
}
