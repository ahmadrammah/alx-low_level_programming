#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - a program that performs simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char *operation;
	int x, y;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi (argv[3]);
	operation = argv[2];
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((y = 0 && *operation == '/') || (y = 0 && *operation == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operation)(x, y));
	return (0);
}
