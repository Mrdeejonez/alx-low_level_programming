#include <stdio.h>
/**
 * main - Entr point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int n;

	while (n < 10)
	{
		printf("%d", n);
		n = n+1;
	}

	putchar('\n');

	return (0);
}
