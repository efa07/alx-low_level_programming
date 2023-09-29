#include "main.h"

/**
 * _pow_recursion - print power recursion
 * @x: integer
 * @y: integer
 * Return: recursion
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		int result = _pow_recursion(x, y / 2);

		if (y % 2 == 0)
		{
			return (result * result);
		}
		else
		{
			return (x * result * result);
		}
	}
}
