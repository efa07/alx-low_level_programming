#include "search_algos.h"

/**
* jump_search -	Searches for a value in
* array of integers using the jump search algorithm
* @array: array of integers
* @size: size of array
* @value: value that i searched in array
* Return: return the index of value, and if it doesn't exist return -1
*/

int jump_search(int *array, size_t size, int value)
{
	int perev = 0, step = 0, len = (int) size;

	if (!array || size <= 0)
		return (-1);

	while (step < len && perev < len)
	{
		if (array[step] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		perev = step;
		step += (int) sqrt(len);
	}
	printf("Value found between indexes [%d] and [%d]\n", perev, step);
	while (perev < len && perev <= step)
	{
		printf("Value checked array[%d] = [%d]\n", perev, array[perev]);
		if (array[perev] == value)
			return (perev);
		perev++;
	}
	return (-1);
}
