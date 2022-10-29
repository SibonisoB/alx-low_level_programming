#include "main.h"

/**
 * _puts - prints a string str to stdout
 * @str: string
 *
 * Return: 1 success and errno if not
 */
void _puts(char *str)
{
	write(1, &str, 1);
}
