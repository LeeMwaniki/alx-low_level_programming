#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers 0 to 14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}