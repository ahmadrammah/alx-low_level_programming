#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * numchecker - check - string there are digit
 * @s: array s
 * Return: Always 0 (Success)
 */
int numchecker(char *s)
{
	unsigned int i = 0;

	while (i < strlen(s))
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - a program that adds positive numbers.
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int count = 1;
	int sti;
	int sum = 0;

	while (count < argc)
	{
		if (numchecker(argv[count]))
		{
			sti = atoi(argv[count]);
			sum = sum + sti;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);

	return (0);
}
