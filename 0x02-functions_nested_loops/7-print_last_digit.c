#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: number
 *
 * Return: 0 success
 */
int print_last_digit(int n)
{
	int lg;

	lg = n % 10;

	_putchar(lg);
	return (0);
}
