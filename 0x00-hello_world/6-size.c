#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0 Always (Success)
 */

int main(void)
{
	int intType;
	long long int longLongInt;
	long int longInt;
	char charType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of a int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longInt));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongInt));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
