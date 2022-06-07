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
		if (singleLetter != 'q' && singleLetter != 'e')
		{
			putchar(singleLetter);
		}
	}

	putchar('\n');

	return (0);
}
