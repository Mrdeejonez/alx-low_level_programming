#include "main.h"

/**
 * print_last_digit - prints the last digit of an entered value/
 * @n: the value to be checked for the last digit
 *
 * Return: last digit of n (Always)
 */

int print_last_digit(int n)
{
	int lastNum;
	int posNumConvert;

	if  (n < 0)
	{
		posNumConvert = -n;
		lastNum = posNumConvert;
	}
	else
	{
		lastNum = n;
	}

	lastNum = 0 + lastNum % 10;
	_putchar('0' + lastNum);

	return (lastNum);
}
