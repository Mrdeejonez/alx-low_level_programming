#include <unistd.h>


int _putchar(char a);
void print_alphabet(void);

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a' ; alpha < 'z' ; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
