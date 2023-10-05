#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i;
	int index = 0;
	char *aout = malloc((total_length + 1) * sizeof(char));

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		total_length += strlen(av[i]) + 1;
	}
	if (aout == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		int length = strlen(av[i]);

		strcpy(aout + index, av[i]);
		index += length;
		aout[index] = '\n';
		index++;
	}
	aout[total_length] = '\0';
	return (aout);
}
