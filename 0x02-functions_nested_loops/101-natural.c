#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int sum = 0;
	int i = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
