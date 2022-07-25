#include "main.h"
#include <stdio.h>

/**
 *print_triangle - prints triangle of size n using '#'
 *@size: size of triangle
 *Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_printchar('\n');
	}
}
