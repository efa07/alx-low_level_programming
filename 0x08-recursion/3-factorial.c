#include "main.h"

/**
 * factorial - factorial n
 * @n: integer arams
 * Return: recursion
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		for (int i = 1; i <= n; ++i)
		{
			result *= i;
		}
		return (result);
	}
}
