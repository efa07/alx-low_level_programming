#include "main.h"

/**
 * _strlen_recursion - return size of string
 * @s: pointer to string
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
