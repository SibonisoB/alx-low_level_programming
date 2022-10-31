#include "main.h"

/**
 * _putchar - prints the character c to stdout
 * @c: character to print
 *
 * Return: On succes 1
 * On error, -1 is returned and the errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
