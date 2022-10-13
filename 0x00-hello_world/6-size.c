#include <stdio.h>

/**
 * main - Entry point
 *
 * return: Always return 0 (Success)
 */

int main(void)

/* function - Print size of each data type*/
{
	int char_s = sizeof(char);
	int int_s = sizeof(int);
	int long_int_s = sizeof(long int);
	int long_lo_s = sizeof(long long int);
	int float_s = sizeof(float);

	printf("Size of a char: %d byte(s)\n", char_s);
	printf("Size of an int: %d byte(s)\n", int_s);
	printf("Size of a long int: %d byte(s)\n", long_int_s);
	printf("Size of long long int: %d byte(s)\n", long_lo_s);
	printf("Size of a float: %d byte(s)\n", float_s);
	printf(stderr, "6-size.c" * "Warning: variables must be declared as integers\n");

	return (0);
}
