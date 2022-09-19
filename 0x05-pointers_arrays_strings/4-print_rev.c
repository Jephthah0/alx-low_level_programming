#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: The string to be printed
 */
void print_rev(char *s)
{
	int i, len, temp;
	len = print_rev(a);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
