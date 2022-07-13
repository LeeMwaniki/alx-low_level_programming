#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0 success
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (j = 'A'; j <= 'F'; j++)
		putchar(j);
	putchar(10);
	return (0);
}
