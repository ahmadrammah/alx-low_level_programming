#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: input one to concatinate
 * @s2: input two to concatatinate
 * Return: concatination of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	c = malloc((i + j + 1));

	if (c == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		c[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		c[i] = s2[j];
		i++;
	}
	c[i] = '\0';
	return (c);
}
