#include "main.h"
#include <stdio.h>

/**
 * description - prints numbers 0 t0 9
 *
 * Return: void
 */
void print_numbers(void);
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar ('10');
}