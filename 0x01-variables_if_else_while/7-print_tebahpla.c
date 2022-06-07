#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char singleLetter;

	for (singleLetter = 'z' ; singleLetter >= 'a'; singleLetter--)
	{
		putchar(singleLetter);
	}

	putchar('\n');

	return (0);
}
