#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 success
 */
int main(void)
{
	char m, n;

	for (m = 'a'; m <= 'z'; m++)
	{
		putchar(m);
	}
	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}
	putchar(10);
	return (0);
}
