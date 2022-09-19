#include "main.h"

/**
 * print_rev - prints out characters in reversed order
 * @s: character to be printed
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int b = 0, index;

	while (s[index++])
		b++;

	for (index = b - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
