#include "main.h"

/**
 * rev_string - write string backwarde
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int j, max, half;
	char first, last;

	j = 0;
	while (s[j] != '\0')
	{
		k++;
	}
	max = k - 1;
	half = max / 2;
	while (half >= 0)
	{
		first = s[max - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
		half--;
	}
}
