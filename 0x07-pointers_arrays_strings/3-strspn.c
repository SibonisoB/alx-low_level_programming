#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string
 * @accept: substring
 *
 * Return: number of bytes in the initial segment of s
 *  which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int size = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				size++;
			}
		}
	}
	return (size);
}
