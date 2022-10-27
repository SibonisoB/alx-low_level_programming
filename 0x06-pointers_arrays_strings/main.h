#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c);

/**
 * _strcat - concatenates two strings
 * @*dest: string input
 * @*src: second string input
 *
 * Return: returns a pointer to the resulting dest string
 */
char *_strcat(char *dest, char *src);