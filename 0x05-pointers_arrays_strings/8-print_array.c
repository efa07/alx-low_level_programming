#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array of int
 * @a: int1
 * @n: int2
 * Return: none
 */

void print_arry(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
