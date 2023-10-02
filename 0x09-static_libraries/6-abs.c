#include "main.h"

/**
 * _abs - gie the abs value of integer
 * @i: the number to be computed
 * Return: abs of int or 0
 */
int _abs(int i)
{
	if (i < 0)
	{
		int abs_val;

		abs_val = i * -1;
		return (abs_val);
	}
	return (i);
}
