#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	int bit_value = (n & mask) ? 1 : 0;

	return (bit_value);
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
}
