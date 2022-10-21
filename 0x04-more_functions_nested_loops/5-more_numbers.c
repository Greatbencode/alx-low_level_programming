#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 * 10 times followed by a new line
 * Return: no return
 */

void more_numbers(void)
{
	int j, k;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 15; k++)
		{
			if (k >= 10)
				_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}
