#include "main.h"

/**
 * factorial - returns a factorial of a number
 * @n: integer number
 *
 * Return: factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
