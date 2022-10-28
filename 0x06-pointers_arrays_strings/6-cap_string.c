#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: string
 *
 * Return: 0 success
 */
char *cap_string(char *s)
{
	int i;
	int j;
	int k;
	char *sep = "\" \",;\\.!?\"(){}";

	char *ALPH = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j])
			{
				for (k = 0; ALPH[k] != '\0'; k++)
				{
					if ((s[i] - ALPH[k]) == 32)
					{
						s[i + 1] = ALPH[k];
					}
				}
			}
		}
	}
	return (0);
}
