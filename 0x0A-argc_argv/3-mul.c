#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two int numbers
 * @argc: argument counter
 * @argv: pointer to arg
 * Return: 1 on error 0 on succes.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
