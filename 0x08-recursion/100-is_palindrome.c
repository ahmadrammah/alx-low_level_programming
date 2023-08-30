#include "main.h"

/**
 * palindrome_check - checks the characters recursively for palindrome
 * @s: string to check
 * @x: iterator
 * @y: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int palindrome_check(char *s, int x, int y)
{
	if (x >= y)
		return (1);

	if (s[x] != s[y])
		return (0);

	return (palindrome_check(s, x + 1, y - 1));
}

/**
 * _strlen - returns the length of a string
 * @s: string to calculate the length of
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	return (palindrome_check(s, 0, _strlen(s) - 1));
}
