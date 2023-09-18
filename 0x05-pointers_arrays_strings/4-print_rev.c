#include "main.h"

/**
 * print_rev - prints string backwards
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	k--;
	while (k >= 0)
	{
		_putchar(s[k]);
		k--;
	}
	_putchar('\n');
}
