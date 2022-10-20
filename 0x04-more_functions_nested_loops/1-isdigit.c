#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: digit
 *
 * Return: Success 1.
 */
int _isdigit(int c)
{
	int num = 0;

	while (num <= 9)
	{
		if  (num == c)
		{
			return (c);
			_putchar('1');
		}
		num++;
	}
	return(c);
}
