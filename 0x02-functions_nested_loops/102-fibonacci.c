#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long num1 = 1, num2 = 2;
	int count;

	printf("%lu, %lu", num1, num2);

		for (count = 2; count < 50; count++)
		{
			unsigned long sum = num1 + num2;
			printf(", %lu", sum);

			num1 = num2;
			num2 = sum;
		}

	printf("\n");

	return (0);
}
