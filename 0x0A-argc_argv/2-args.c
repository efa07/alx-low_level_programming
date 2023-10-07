#include <stdio.h>

/**
 * main - print all arguments, followed by new line
 * @argc: argument num
 * @argv: pointer to argument
 * Return: 0 on succes.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
