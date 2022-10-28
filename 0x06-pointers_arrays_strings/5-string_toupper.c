#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @alph: lowercase letters
 *
 * Return: return string
 */
char string_toupper(char *alph)
{
	/*char *alph = "abcdefghijklmnopqrstuvwxyz";*/
	char *ALPH = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i <= 26; i++)
	{
		if ((alph[i] - ALPH[i]) == 32)
		{
			alph[i] = ALPH[i];
		}
	}
	return (0);
}
