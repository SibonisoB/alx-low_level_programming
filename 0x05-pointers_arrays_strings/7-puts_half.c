#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 *
 * Return: nothig
 */
void puts_half(char *str)
{
	int len;
	int i;
	int j;

	for (len = 1; str[len] != '\0'; len++)
	{
		len++;
	}
	len = len;
	if ((len % 2) == 0)
	{
		for (i = 0; i < len / 2; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (j = len / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
