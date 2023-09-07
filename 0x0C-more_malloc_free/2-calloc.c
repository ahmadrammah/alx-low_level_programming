#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (size == 0 || nmemb == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	_memset(pointer, 0, nmemb * size);

	return (pointer);
}
/**
 * *_memset - a function that storres constant byte.
 * @s: memory area to be filled
 * @a: char to copy
 * @n: number of times to copy a
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char a, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = a;
	}

	return (s);
}
