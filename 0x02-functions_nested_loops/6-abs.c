#include "main.h"

/**
 * _abs - prints out the absolute value of a entered value
 * @n: is the value to print as an absolute
 *
 * Return: int (Always)
 */

int _abs(int n)
{
	if (n > 0)
	{
		n = n;
	}
	else if (n == 0)
	{
		n =  0;
	}
	else if (n < 0)
	{
		n = -n;
	}

	return (n);
}
