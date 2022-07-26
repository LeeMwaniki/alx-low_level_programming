#include "main.h"
#include <stdio.h>

/**
 *main - entry point of fizz buzz function
 *Return: 0 Success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		} else if (i % 3 == 0)
		{
			printf(" Fizz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else if (i % 5 == 0)
		{
			printf(" Buzz");
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
}
