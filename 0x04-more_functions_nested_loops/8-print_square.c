#include "main.h"

/**
 * print_square - prints a square
 * @size: size of a square
 *
 * Return: 0 success
 */
void print_square(int size)
{
	int c;

	for (c = 1; c <= size; c++)
	{
		if (size == 0)
		{
			break;
		}
		else
		{
			int r;

			for (r = 1; r <= size; r++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	/*_putchar('\n');*/
}
