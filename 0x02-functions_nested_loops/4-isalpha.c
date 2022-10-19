#include "main.h"

/**
 * _isalpha - check if character is an alphabet
 * @c: character to be checked
 *
 * Return: 0 success
 */
int _isalpha(int c)
{
	int alph = 'a';
	int ALPH = 'A';
	int chk = c;

	while (alph <= 'z')
	{
		if (alph == chk)
		{
			_putchar('1');
		}
		alph++;
	}

	while (ALPH <= 'A')
	{
		if (ALPH == chk)
		{
			_putchar('1');
		}
		ALPH++;
	}

	while (alph != c && ALPH != c)
	{
		_putchar('0');
	}
	return (0);
}
