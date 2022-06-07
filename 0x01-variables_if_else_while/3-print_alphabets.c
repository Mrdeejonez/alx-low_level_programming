#include <stdio.h>
/**
 * main - Entr point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char singleLetter;

	for (singleLetter = 'a' ; singleLetter <= 'z'; singleLetter++)
	{
		putchar(singleLetter);
	}
	for (singleLetter = 'A' ; singleLetter <= 'Z' ; singleLetter++)
	{
		putchar(singleLetter);
	}

	putchar('\n');

	return (0);
}
