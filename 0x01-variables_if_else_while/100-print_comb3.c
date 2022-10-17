#include <stdio.h>
/**
 * main -Entry point
 * Return: return 0 (Success)
 */
int main(void)
{
	int n1;
	int n2;

	for (n1 = '0'; n1 <= '9'; n1++)
	{
		n2 = '1';
		while (n2 <= '9')
		{
			if (n2 > n1)
			{
				putchar(n1);
				putchar(n2);
				if (n1 <= '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
	}
	putchar('\n');
	return (0);
}
