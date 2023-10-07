#include <stdio.h>
#include <string.h>
/**
 * main - print its name, followed by new line.
 * @argc: num of command line arg
 * @argv: pointer to command line arg
 * Return: 0;
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc > 0)
	{
		char *lastocc = strrchr(argv[0], '/');
		if (lastocc != NULL)
		{
			lastocc++;
		}
		else
		{
			lastocc = argv[0];
		}
	}
	printf("%s", argv[0]);
	return (0);
}
