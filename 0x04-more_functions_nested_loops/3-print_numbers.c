#include "main.h"
#include <stdio.h>

/**
 * description - prints numbers 0 to 9
 *
 * Return: void
 */
void print_numbers(void);
{
	char c;

	for (c = '0'; c <= '10'; c++)
	{
		_putchar(c);
	}
	_putchar('10');
}

