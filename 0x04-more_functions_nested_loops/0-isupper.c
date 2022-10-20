#include "main.h"

/**
 * _isupper - This is a function that checks for UPPERCASE character.
 * @c: an input character
 * Return: 1 if c is UPPERCASE or 0 otherwise
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
	if (c == uppercase)
	{
	isupper = 1;
	break;
	}
	}

	return (isupper);
}
