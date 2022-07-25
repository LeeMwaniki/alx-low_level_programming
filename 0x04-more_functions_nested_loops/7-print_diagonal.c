#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints '\' n number of times
 *@n: number of '\\' lines to print
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int interval;

	for (i = 0; i < n; i++)
	{
		for (interval = 0; interval < i; interval++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		putchar('\n');
	}
}
