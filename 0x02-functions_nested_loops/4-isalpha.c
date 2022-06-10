#include "main.h"

/**
 * _isalpha - Checks if the entered character is a upppercase letter/
 * or a lower case letter
 * @c: the character in question
 *
 * Return: 1 if true or 0 if false (Success)
 */

int _isalpha(int c)
{
	char checker = c;
	int val = 0;

	if (checker >= 'a' && checker <= 'z')
	{
		val = 1;
		if (checker >= '0' && checker <= '9')
		{
			val = 0;
		}

	}
	else if (checker >= 'A' && checker <= 'Z')
	{
		val = 1;
		if (checker >= '0' && checker <= '9')
		{
			val = 0;
		}

	}
	else
	{
		val = 0;
	}

	return (val);
}
