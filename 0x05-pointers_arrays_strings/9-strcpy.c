#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src
 * @dest: A buffer to copy the string to
 * @src: The source string to copy
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
