#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */
char *leet(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
	{
		switch (s[i])
		{
			case 'a':
			case 'A':
				s[i] = '4';
				break;
			case 'e':
			case 'E':
				s[i] = '3';
				break;
			case 'g';
			case 'G':
			s[i] = '6';
			break;
			case 'i':
			case 'I':
			s[i] = '1';
			break;
			case 'l':
			case 'L':
			s[i] = '1';
			break;
			case 'o':
			case 'O':
			s[i] = '0';
			break;
			case 's':
			case 'S':
			s[i] = '$';
			break;
			case 't':
			case 'T':
			s[i] = '7';
			break;
			default:
			break;
		}
		i++;
	}
	return (s);
}

