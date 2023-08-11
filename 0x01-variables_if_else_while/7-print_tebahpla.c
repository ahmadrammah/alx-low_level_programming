#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 26)
	{
		putchar('z' - i);
		i++;
	}
	putchar('\n');

	return (0);
}
