#include "main.h"

/**
 * _islower - check if the alphabet is lowercase
 * @c: the character to be checked
 *
 * Return: return 1 if alphabet is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	int alph = 'a';
	int chk = c;

	while (alph <= 'z')
	{
		if (chk == alph)
		{
			_putchar('1');
		}
		alph++;
	}
	
	while (alph <= 'z')
	{
		if (chk != alph)
		{
			_putchar('0');
		}
	}
	return (0);
}
