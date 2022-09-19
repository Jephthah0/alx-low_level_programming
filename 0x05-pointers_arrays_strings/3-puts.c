#include "main.h"

/**
 * _puts - prints out inputed characters
 * @str: string to be displayed
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
