#include <stdio.h>
/**
 * main - The entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int b;

	for (n = 48; n <= 56; n++)
	{
		for (b =49; b <=56; b++)
		{
		
			if (b > n)
			{
				putchar(n);
				putchar(b);
				if (n != 56 || b != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
