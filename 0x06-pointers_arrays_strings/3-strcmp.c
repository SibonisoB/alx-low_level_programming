#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string number 1
 * @s2: string number 2
 *
 * Return: number less than 0 if s1 < s2, number greater
 * than 0 if s1 > s2, 0 if s1 = s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int c;
	int j;
	int c2;

	i = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	c = i;

	j = 0;

	while (s2[j] != '\0')
	{
		j++;
	}
	c2 = j;

	if (c > c2)
	{
		return (15);
	}
	else if (c < c2)
	{
		return (-15);
	}
	else if (c == c2)
	{
		return ('\0');
	}
	return (0);
}
