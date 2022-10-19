#include "main.h"

/**
 * _abs - computes absolute value of an integer number
 * @n: integer number to compute the absolute value of
 *
 * Return: 0 success
 */
int _abs(int n)
{
	int abs;

	if (n < '0')
	{
		abs = (-1) * n;
		_putchar(abs);
	}

	else
	{
		_putchar(n);
	}
	return (0);
}
