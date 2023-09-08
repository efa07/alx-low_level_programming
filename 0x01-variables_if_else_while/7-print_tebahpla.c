#include <stdio.h>
/**
 * main - The entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
