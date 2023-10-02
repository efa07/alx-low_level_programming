#include "main.h"

/**
 * _puts - print string
 *  @str: the string
 *  Return: void
 */

void _puts(char *str)
{
	str = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
