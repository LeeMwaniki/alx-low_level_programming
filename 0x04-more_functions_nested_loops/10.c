#include "main.h"
#include <stdio.h>

/**
 *print_triangle - prints triangle of dimensions 'size'
 *@size: Describe size of triangle
 *Return: 0
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
