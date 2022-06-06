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

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(longInt));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longLongInt));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
