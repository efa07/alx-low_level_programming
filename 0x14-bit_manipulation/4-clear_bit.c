#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 in given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	*n &= ~mask;

	return (1);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
}
