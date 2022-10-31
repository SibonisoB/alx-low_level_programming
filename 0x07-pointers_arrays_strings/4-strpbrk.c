#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: substring
 *
 * Return: pointer to the beginning of substring
 * and NULL if substring is not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				_putchar(s[i]);
			}
		}

	}
	_putchar ('\0');
	return (0);
}
