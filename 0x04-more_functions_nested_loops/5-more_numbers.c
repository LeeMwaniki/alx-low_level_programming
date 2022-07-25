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
		i = 0;
		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			{
				_putchar(i % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
