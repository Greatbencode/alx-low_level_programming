#include "main.h"

/**
 * print_most_numbers - print from 1 to 9 except 2 and 4
 */

void print_most_numbers(void)
{
	int j;

	for (j = 48; j <= 57; j++)
	{
		if (j == 50 || j == 52)
			continue;

		_putchar(j);
	}
	_putchar('\n');
}
