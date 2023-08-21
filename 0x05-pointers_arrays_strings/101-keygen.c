#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p[100];
	int i, sum, x;

	sum = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		p[i] = rand() % 82;
		sum = sum + (p[i] + '0');
		putchar(p[i] + '0');
		if ((3221 - sum) - '0' < 82)
		{
			x = 3221 - sum - '0';
			sum = sum + x;
			putchar(x + '0');
			break;
		}
	}

	return (0);
}
