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

/**
 * _puts - prints string s to stdout
 * @str: string
 *
 * Return: 1 is returned if successful and EOF or error if not
 */
void _puts(char *str);

/**
 * print_rev - prints a string in reverse
 * @s: string
 *
 * Return: reverse string
 */
void print_rev(char *s);

/**
 * puts2 - prints every other character of a string
 * @str: string
 *
 * Return: every other character
 */
void puts2(char *str);

/**
 * puts_half - prints half of a string
 * @s: string
 *
 * Return: nothing
 */
void puts_half(char *str);
