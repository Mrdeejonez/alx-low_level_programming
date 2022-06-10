#include "main.h"

/**
 * _islower - Entry point checks if @c is lower case
 *@c: The value parsed to be checked
 *
 *Description: taskes the value against all the lower case alphabet/
 *and makes sure  *it is is or isnt a lower case
 *
 * Return: 1 if true (Success)
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
