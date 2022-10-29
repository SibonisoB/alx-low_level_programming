#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c);

/**
 * reset_to_98 - updates the value of a pointer to 98
 * @n: pointer
 *
 * Return: nothing
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: nothing
 */
void swap_int(int *a, int *b);

/**
 * _strlen - returns lenght of a string
 * @s: string
 *
 * Return: 0 success
 */
int _strlen(char *s);
