#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *a = haystack;
		char *b = needle;

		while (*b != '\0' && *a == *b)
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}
