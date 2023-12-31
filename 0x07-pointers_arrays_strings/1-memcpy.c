#include "main.h"
/**
 *_memcpy - a function that copies memory area.
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int r;

	for (r = 0; r < i; r++)
	{
		n--;
		dest[r] = src[r];
	}
	return (dest);
}
