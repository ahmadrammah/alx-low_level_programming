#include <stdlib.h>
#include "main.h"

/**
 * count_word - a function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int flag = 0;
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			j++;
		}
	}

	return (j);
}
/**
 * **strtow - a function that splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **m, *tmp;
	int i, k = 0, x = 0, w, j = 0, start, end;

	while (*(str + x))
		x++;
	w = count_word(str);
	if (w == 0)
		return (NULL);

	m = ((char **) * (w + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; i <= x; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				end = i;
				tmp = ((char *) * (j + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				m[k] = tmp - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			start = i;
	}

	m[k] = NULL;

	return (m);
}
