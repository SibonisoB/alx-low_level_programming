#include "main.h"

/**
 * _strncpy - copy string src into dest
 * @dest: string copy
 * @src: string to be copied
 * @n: bytes from src to be copied
 *
 * Return: string copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	/*int s = sizeof(src);*/

	for (i = 0; i < n && src[i] != '\n'; i++)
	{
		dest[i] = src[i];
		/*if (s < n && i < n)*/
		/*{*/
		/*	dest[i] = '\n';*/
		/*}*/
	}
	return (dest);
}
