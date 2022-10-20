#include "main.h"

/**
 * tims_table - print 9 times table
 *
 * Return - 0 success
 */
void times_table(void)
{
	int r = '0';
	
	while (r <= '9')
	{
		int c = '0';
		int m = c * r;

		while (c <= '9')
		{
			_putchar(m);
			_putchar(',');
			_putchar(' ');
			c++;
		}
		_putchar('\n');
		r++;
	}
}
