#include "main.h"

/**
 * _strcpy - copies a string into a buffer
 * @dest: buffer
 * @src: string
 *
 * Return: pointer to the buffer dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 1;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		len++;
	}
	len = len;

	for (; i < len; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
