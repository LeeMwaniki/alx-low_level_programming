#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 success
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}
	putchar (10);
	return (0);
}
