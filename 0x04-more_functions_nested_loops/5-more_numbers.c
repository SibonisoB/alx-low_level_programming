#include "main.h"

/**
 * more_numbers - print numbers 0 to 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		int j;

		for (j = '0'; j <= '1'; j++)
		{
			int i;

			if (j == '0')
			{
				for (i = '0'; i <= '9'; i++)
				{
					_putchar(i);
				}
			}
			else
			{
				for (i = '0'; i <= '4'; i++)
				{
					_putchar(j);
					_putchar(i);
				}
			}
		}
		_putchar('\n');
	}
}
