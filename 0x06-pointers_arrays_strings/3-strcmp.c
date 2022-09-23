#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 * Return: Positive diference, unmatched characters or negative
 * difference unmatched characters
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
	if (*s1 == '\0')
	{
		return (0);
	}
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
