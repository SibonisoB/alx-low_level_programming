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

/**
 * print_numbers - pritns numbers from 0 to 9
 *
 * Return: 0 success
 */
void print_numbers(void);
/**
 * print_most_numbers - print numbers 0 to 9 except 2 and 4
 *
 * Return: 0 success
 */
void print_most_numbers(void);

/**
 * more_numbers - print numbers 0 to 14 ten times
 */
void more_numbers(void);

/**
 * print_line - prints a stright line
 * @n: number of times _ is printed
 *
 * Return: 0 success
 */
void print_line(int n);

/**
 * print_diagonal - print diagonal
 * @n: number of times the character \ is printed
 * Return: 0 success
 */
void print_diagonal(int n);

/**
 * print_square - prints a square
 */
void print_square(int size);
