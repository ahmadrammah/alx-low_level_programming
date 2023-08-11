#include <stdio.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 26)
	{
		char letter = 'a' + i;

		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
