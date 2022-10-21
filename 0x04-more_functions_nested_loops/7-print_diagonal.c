#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: number of times the character \ is printed
 *
 * Return: 0 success
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;
		int c = '\\';

		for (i = 1; i <= n; i++)
		{
			if (n == 1)
			{
				_putchar(c);
				break;
			}
			else
			{
				int y;
				int sp = ' ';
				/**/
				_putchar(c);
				_putchar('\n');

				for (y = 0; y < i; y++)
				{
					if (i < n)
					{
						_putchar(sp);
					}
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
