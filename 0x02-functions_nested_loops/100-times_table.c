#include <stdio.h>
/**
 * print_times_table - prints the times table
 * @n: integer for which the times table will be printed
 *
 * Description: prints the times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int row, column, product;

	if (n >= 0 && n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = row * column;
				if (column == 0)
					printf("0");
				else if (product < 10)
					printf(",   %d", product);
				else if (product < 100)
					printf(",  %d", product);
				else
					printf(", %d", product);
			}
			printf("\n");
		}
	}
}
