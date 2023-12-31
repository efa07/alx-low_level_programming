#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
	int **gridout;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	gridout = malloc(height * sizeof(int *));

	if (gridout == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		gridout[i] = malloc(width * sizeof(int));
		if (gridout[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(gridout[j]);
			free(gridout);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			gridout[i][j] = 0;
	}
	return (gridout);
}
