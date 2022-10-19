#include "main.h"

/**
 * jack_bauer - print every minute of the day starting from 00:00 to 23:59
 *
 * Return: return void
 */
void jack_bauer(void)
{
	int c = '0';

	while (c <= '4')
	{
		int h2 = 0;

		while (h2 <= '9')
		{
			int h1 = '0';

			while (h1 <= '9')
			{
				_putchar(h1);
				h1++;
				_putchar('\n');
			}
			h2++;
		}
		c++;
	}
}
