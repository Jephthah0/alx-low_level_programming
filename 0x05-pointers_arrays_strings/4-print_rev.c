#include "main.h"

/**
 * print_rev - prints out characters in reversed order
 * @s: character to be printed
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	while (*s)
		_putchar(*s--);

	_putchar('\n');
}
