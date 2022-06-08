#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 * prints the alphabet to the console.
 *
 * @void: nothing
 *
 * Return: void Always (success)
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
	_putchar(alpha);
	}

	_putchar('\n');
}
