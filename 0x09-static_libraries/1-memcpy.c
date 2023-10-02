#include "main.h"

/**
 * _memcpy - copy memory addres
 * @dest: pointer to char
 * @src: pointer to char
 * @n: size
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}