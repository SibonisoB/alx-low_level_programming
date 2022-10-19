#include "main.h"

/**
 * print_alphabet - Prints alphabets from a-z in lowercase
 *
 * Return: Always void (Success)
 */

void print_alphabet(void)
{
	int alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
