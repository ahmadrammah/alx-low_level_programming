#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers.
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **memac;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	memac = malloc(sizeof(int *) * height);

	if (memac == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		memac[i] = malloc(sizeof(int) * width);

		if (memac[i] == NULL)
		{
			for (; i >= 0; i--)
				free(memac[i]);

			free(memac);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			memac[i][j] = 0;
	}

	return (memac);
}
