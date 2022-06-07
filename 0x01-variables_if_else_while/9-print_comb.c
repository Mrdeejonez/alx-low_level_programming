#include <stdio.h>
/**
 * main - Entr point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{

		if (n == 9)
		{
			putchar(n + '0');
		}
		else
		{
			putchar(n + '0');
			putchar(','+'\t');
		}
	}

	putchar('\n');

	return (0);
}
