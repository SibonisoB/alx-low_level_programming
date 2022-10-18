#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - wries the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - writes the alphabets, in lowercase, to stdout
 * Return: Always return 0 (Success)
 */
void print_alphabet(void)
{
	int alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
}
