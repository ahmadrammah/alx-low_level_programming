#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i;
	long int n = 612852475143;
	long int maxf = -1;

	while (n % 2 == 0)
	{
		maxf = 2;
		n = n / 2;
	}

	for (i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			maxf = i;
			n = n / i;
		}
	}

	if (n > 2)
		maxf = n;

	printf("%ld\n", maxf);

	return (0);
}
