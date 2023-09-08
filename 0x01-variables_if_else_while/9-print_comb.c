#include <stdio.h>
/**
 * main - The entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	int z;

	for (z = 48; z < 58; z++)
	{
		putchar(z);
		if (z != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
