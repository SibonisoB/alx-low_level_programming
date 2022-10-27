#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: string input number 1
 * @src: string input number 2
 * @n: size of src in bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[sizeof(dest) + i] = src[i];
	}
	dest[sizeof(dest) + i] = '\n';
	return (src);
	return (dest);
}
