#include "main.h"

/**
 * _strlen - return lenght of a string
 * @s: string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}
	return (c);
}
