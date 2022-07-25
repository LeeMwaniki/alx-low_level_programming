#include "main.h"
#include <stdio.h>

/**
 * print_square - print square using ##
 * @size: length / width of square
 * Return: void
 */
void print_square(int size)
{
	int length, width;

	for (length = 0; length < size; length++)
	{
		for (width = 0; width < length; width++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
