#include "main.h"

/**
 * _strcat - concatentenates two strings
 * @dest: string input number 1
 * @src: string input to be concatenated to string number 1
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	unsigned int i;

	for (i = 0; i < sizeof(dest); i++)
	{
		dest[sizeof(dest) + i] = src[i];
		dest[sizeof(dest) + i] = '\0';
	}
	/*dest[sizeof(dest) + i] = dest[sizeof(dest)+i];*/
	return (src);
	return (dest);
}
