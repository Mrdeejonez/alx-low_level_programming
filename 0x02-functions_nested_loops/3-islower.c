#include "main.h"

/**
 * _islower - Entry point
 * checks of the character is lower
 *
 * Retruns: 1 (Success)
 * Returns: 0 (Otherwise)
 */

int _islower(int c)
{
	char checker = c;
	int val = 0;

	if (checker >= 'a' && checker <= 'z')
	{
		val = 1;
	}

	return (val);
}
