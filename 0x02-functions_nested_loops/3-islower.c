#include "main.h"

/**
 * _islower - single line
 * @c: contains values to be compared
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
