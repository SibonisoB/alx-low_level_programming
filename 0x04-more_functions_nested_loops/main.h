#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On succes 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 * Return: on success 1.
 */
int _isupper(int c);

/**
 * _isdigit - checks for a digit 0 throu 9
 * @c: digit
 *
 * Return: Success 1.
 */
int _isdigit(int c);

/**
 * mul - multiples two integers
 * @a: integer 1
 * @b: integer 2
 */
int mul(int a, int b);
