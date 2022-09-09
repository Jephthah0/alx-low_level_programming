#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int integer;

	for (integer = 0; integer < 10; integer++)
		putchar((integer % 10) + '0');
	putchar('\n');
	return (0);
}
