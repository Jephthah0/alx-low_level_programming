#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src
 * @dest: A pointer to the string
 * @src: Source string to be appended to @dest
 * Return: A pointer to the destination string @dest;
 */
char *strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
