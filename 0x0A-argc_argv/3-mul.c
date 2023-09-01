#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, x, n, length, f, no;

	i = x = n = length = f = no = 0;
	while (s[length] != '\0')
		length++;
	while (i < length && f == 0)
	{
		if (s[i] == '-')
			++x;
		if (s[i] <= '9' && s[i] >= '0')
		{
			no = s[i] - '0';
			if (x % 2)
				no = -no;
			n = n * 10 + no;
			f = 1;
			if (s[i + 1] > '9' || s[i + 1] < '0')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int ans, x, y;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	ans = num1 * num2;

	printf("%d\n", ans);

	return (0);
}

