#include "main.h"

/**
 * print_alphabet_x10(void) - print 10x the alphabet, in lowercase.
 *
 * followed by new line.
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		_putchar('\n');
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		i++;
	}
}
