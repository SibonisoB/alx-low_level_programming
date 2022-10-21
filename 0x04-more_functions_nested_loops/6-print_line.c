#include "main.h"

/**
 * print_line - prints a stright line
 * @n: number of time '_' is printed
 *
 * Return: 0 success.
 */
void print_line(int n)
{
	if (n > 0)
	{
		int c = '_';

		int count = 1;
		/*print '_'*/
		while (count <= n)
		{
			_putchar(c);
			count++;
		}
	}
	_putchar('\n');
}
