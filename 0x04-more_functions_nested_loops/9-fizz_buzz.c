#include <stdio.h>

/**
 *main - entry point of fizz buzz function
 *Return: 0 Success
 */
int main(void)
{
	int i;
	char c = ' ';

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("Fizz Buzz%c", c);
		} else if (i % 3 == 0)
		{
			printf("Fizz%c", c);
		} else if (i % 5 == 0)
		{
			printf("Buzz%c", c);
		} else
		{
			printf("%d%c", i, c);
		}
	}
	printf("\n");
}
