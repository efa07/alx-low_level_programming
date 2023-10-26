#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary.
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;
	int len = 0;

	if (!b)
		return (0);
	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		ui = (ui << 1) + (b[len] - '0');
		len++;
	}
	return (ui);
}
