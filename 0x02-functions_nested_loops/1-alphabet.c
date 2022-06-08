#include <unistd.h>
#include "main.h"




/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a' ; alpha < 'z' ; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a' ; alpha < 'z' ; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
