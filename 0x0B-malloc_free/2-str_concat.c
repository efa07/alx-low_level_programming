#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	size_t s1_len = (s1 != NULL) ? strlen(s1) : 0;
	size_t s2_len = (s2 != NULL) ? strlen(s2) : 0;
	size_t strout_len = s1_len + s2_len + 1;
	char *strout = malloc(sizeof(char) * strout_len);

	if (strout == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		memcpy(strout, s1, s1_len);
	}
	if (s2 != NULL)
	{
		memcpy(strout + s1_len, s2, s2_len);
	}
	strout[strout_len - 1] = '\0';
	return (strout);
}
