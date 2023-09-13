#include "main.h"

/**
 * print_sign - prints sign of number
 * @i: the number to be checked
 * Return: 1 for positive, 0 for 0, -1 for negative
 */
int print_sign(int i)
{
    if (i > 0)
    {
        _putchar('+');
        return (1);
    }
    else if (i < 0)
    {
        _putchar('-');
        return (-1);
    }
    else
    {
        _putchar('0');
        return (0);
    }
}
