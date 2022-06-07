#include <stdio.h>
/**
 * main - Entr point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char singleLetter;
	int num;

	for (num = 0 ; num < 10 ; num++ )
	{
		putchar(num%10 + '0');
	}
	for (singleLetter = 'a' ; singleLetter <= 'f'; singleLetter++)
	{
		putchar(singleLetter);
	}

	putchar('\n');

	return (0);
}
