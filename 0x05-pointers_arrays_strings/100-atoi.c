#include "main.h"

/**
 * _atoi - convrts a string to an integer
 * @s: string
 *
 * Return: converted string
 */
int _atoi(char *s)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == j)
			{
				_putchar(s[i]);
			}
		}
	}
	return (s[i]);
}
