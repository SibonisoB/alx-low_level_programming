#include "main.h"

/**
 * _putchar - writes the character to c stdout
 * @c: The character to print
 *
 * Return: 1 success
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
