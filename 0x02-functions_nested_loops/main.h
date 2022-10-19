#include <unistd.h>

/**
 * _putchar - wries the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_alphabet - writes the alphabets, in lowercase, to stdout
 * Return: Always void 0 (Success)
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - print the alphabets 10 times in lowercase
 *Return: Always void 0 (Success)
 */
void print_alphabet_x10(void);

/**
 * _islower - checks for lowercase character
 * @c: The chacter to check
 *
 * Return: 1 on success and 0 otherwise
 */
int _islower(int c);

/**
 * _isalpha - checks alphabet character
 * @c: the character to check
 *
 * Return: 1 on success and 0 otherwise
 */
int _isalpha(int c);

/**
 * print_sign - print the sign of a number
 * @n: number input
 *
 * Return: 0 success
 */
int print_sign(int n);

/**
 * _abs - computs absolute number value of an integer
 * Return: 0 success
 */
int _abs(int n);

/**
 * _last_digit - print the last digit of a number
 * Return: 0 success
 */
int print_last_digit(int n);

/**
 * main - print every minute of the day
 *
 * Return: always 0
 */
void jack_bauer(void);
