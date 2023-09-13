#include "main.h"
/**
 * print_last_digit - print last digit of number
 *@i: the number to be used
 * Return: return last digit
 */
int print_last_digit(int i)
{
	int ld;

	ld = i % 10;
	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}
