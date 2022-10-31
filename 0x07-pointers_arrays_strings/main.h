#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _memset - fills the memory with a constant byte
 * @s: pointer to memory
 * @b: constant byte
 * @n: first n bytes of the memory area
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n);
