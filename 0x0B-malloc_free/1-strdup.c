#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;

	s = malloc((i + 1));

	if (s == NULL)
		return (NULL);

	while (str[j])
	{
		s[j] = str[j];
		j++;
	}

	return (s);
}
