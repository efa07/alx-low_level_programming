#include "main.h"

/**
 * _isdigit -verifies if a  character is a digit or not
 *@c: tested character
 *Return: return 1 or 0 beasd on input
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
