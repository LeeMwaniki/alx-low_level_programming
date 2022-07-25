#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: character to be checked for digit
 * Return: 1 for digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
