#include <stdio.h>
/**
 * main - Entr point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int n;
	char m;

	for (n = '0' ; n < 10 ; n++)
	{
		m = n + '0';
		putchar(m);
	}

	putchar('\n');

	return (0);
}
