#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * prints the alphabet 10 times.
 *
 * Returns: void Always (Success)
 */

void print_alphabet_x10(void)
{
	int a=0;

	while(a < 10)
	{
		char b;
		for(b = 'a' ; b <= 'z' ; b++)
		{
			_putchar(b);
		}
	a++;

	_putchar('\n');
	}
}
