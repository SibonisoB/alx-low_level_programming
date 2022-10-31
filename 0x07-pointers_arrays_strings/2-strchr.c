#include "main.h"

/**
 * _strchr - locates character c in a string
 * @s: string
 * @c: character to be located
 *
 * Return: Pointer to first occurrence of c and
 * return NULL if c is not found in string.
 */
char *_strchr(char *s, char c)
{
	int i;
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == c)
		{
			for (i = j; s[i] != '\0'; i++)
			{
				_putchar (s[i]);
			}
			break;
		}
	}
	_putchar('\n');
	return (0);
}
