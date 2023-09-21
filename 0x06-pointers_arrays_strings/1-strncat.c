#include "main.h"
/**
 * _strncat - concatenates string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from source
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

