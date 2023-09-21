#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */
char *cap_string(char *s)
{
	int i = 0;
	int is_start_of_word = 1;

	while (s[i] != '\0')
	{
		if (is_start_of_word && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		is_start_of_word = 0;
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			is_start_of_word = 1;
		}
		i++;
	}
	return (s);
}

