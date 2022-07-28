#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * description - finds the max prime factor of long int n
 * Return: void
 */
int main(void)
{
	long int i, max, n;

	max = -1;
	n = 122;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	if (n > 2)
	{
		max = n;
	}
	printf("%ld\n", max);

	return (0);
}

