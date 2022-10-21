#include "main.h"

/**
 * print_line - This draws a straight line in the terminal
 * @n: this is the number of times the character _ is  printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int j;

		for (j = 1; j <= n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
