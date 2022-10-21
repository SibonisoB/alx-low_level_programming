#include "main.h"

/**
 * more_numbers - print numbers 0 to 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int c;
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		for (c = '0'; c <= '1'; c++)
		{
			int n;

			for (n = '0'; n <= '9'; n++)
			{
				if ((c >= '1') && (n <= '4'))
				{
					_putchar(c);
				}
				if ((c >= '1') && (n > '4'))
				{
					break;
				}
				_putchar(n);
			}
		}
		_putchar('\n');
	}
}
