#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: 1 success
 * On error, -1 is returned and errno is set appropriately
 */
int _putchar(char c);

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to print
 *
 * Return: string and a new line
 */
void _puts_recursion(char *s);

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 *
 * Return: reversed string
 */
void _print_rev_recusrion(char *s);

/**
 * factorial - returns the factorial of a number
 * @n: ineger number
 *
 * Return: factorial of a number
 */
int factorial(int n);
