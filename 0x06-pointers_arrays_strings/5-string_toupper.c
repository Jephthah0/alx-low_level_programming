#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * of a string
 * to upper case
 * @s: String o modify
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[1] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
