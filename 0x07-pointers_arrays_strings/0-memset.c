#include "main.h"

/**
 * _memset - fills first n bytes of memory with b bytes
 * @s: pointer to the memory area
 * @b: constant bytes to fill first n bytes of memory area
 * @n: first n bytes of memory area
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int size = sizeof(s);

	if ((size % n) == 0)
	{
		size = b;
	}
	else
	{
		size = b + (size % n);
	}
	return (s);
	_putchar('\n');
}
