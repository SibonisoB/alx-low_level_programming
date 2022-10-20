#include "main.h"

/**
 * _isupper - check uppercase character
 * @c: character to be checked
 *
 * Return: On success 1.
 */
int _isupper(int c)
{
	int ALPH = 'A';

	while (ALPH <= 'Z')
	{
		if (ALPH == c)
		{
			_putchar('1');
			ALPH++;
			break;
		}
		else
		{
			_putchar('0');
		}
	}
	return (c);
}
