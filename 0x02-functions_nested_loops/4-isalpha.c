#include "main.h"

/**
 * _isalpha - a function used to check if d is a lower or uppercase letter
 * @c: is the int that will be used for the argument
 * Return: 0
 */
int_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
