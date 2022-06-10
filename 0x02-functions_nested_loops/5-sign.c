#include "main.h"

/**
 * print_sign - prints whether the entered number is positive/
 * or negative
 * @n: the value in question
 *
 * Return: 1 if value is positive/
 * 0 if vaulue is zero/
 * "-1" if value is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		n = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		n = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = 1;
	}

	return (n);
}
