#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @b: char to copy
 * @s: memory area to be filled
 * @n: number of times to copy b
 * Return: pointer to the memory area n
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
