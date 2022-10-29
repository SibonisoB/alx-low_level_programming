#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: string
 *
 * Return: reversed string
 */
void print_rev(char *s)
{
	int i;
	int c = 0;
	int j;

	for (i = 0; s[i] != '\0'; ++i)
	{
		c++;
	}

	for (i = c; s[i] != '\0'; i--)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			s[j] = s[c];
		}
	}
}
