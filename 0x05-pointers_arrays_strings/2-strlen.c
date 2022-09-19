#include "main.h"

/**
 * _strlen - prints the actual length  of a string
 * @*s: character to print out
 *
 * Return: Always o.
 */
int _strlen(char *s)
{
	char *s;
	int len;

	s = "My first strlen!";
	len = _strlen(s);
	_putchar("%d\n", len);
	return (0);
}

