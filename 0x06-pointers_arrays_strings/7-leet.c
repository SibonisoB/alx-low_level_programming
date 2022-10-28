#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 *
 * Return: 0 success
 */
char *leet(char *s)
{
	int i;
	int j;
	char *alph = "aeotl";
	char *ALPH = "AEOTL";
	char *num = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alph[j] != '\0'; j++)
		{
			if ((s[i] == alph[j]) || (s[i] == ALPH[j]))
			{
				s[i] = num[j];
			}
		}
	}
	return (0);
}
