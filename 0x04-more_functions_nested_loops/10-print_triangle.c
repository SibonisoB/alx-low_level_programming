#include "main.h"

/**
 * print_triangle - print trianlge
 * @size: size of triangle
 *
 * Return: 0 success
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 1; i <= size; i++)
		{
			int y;
			int sp = ' ';
			int x;

			for (y = size - i; y > 0; y--)
			{
				_putchar(sp);
			}

			for (x = 0; x < i; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
