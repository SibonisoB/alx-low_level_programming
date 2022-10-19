#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times in lowercase
 *
 * Return: Always return void (Success)
 */
void print_alphabet_x10(void)
{
	int count = '1';

	while (count <= '9')
	{
		int alph = 'a';

		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		count++;
		_putchar('\n');
	}
}
