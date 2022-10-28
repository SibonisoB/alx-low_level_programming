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

/**
 * _strncat - conctenates two strings using n bytes from src
 * @*dest: string input number 1
 * @*src: second string input
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies a string
 * @dest: string 1
 * @src: string 2
 * @n: n bytes from string 2
 *
 * Return: string copy
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 * @s1: string number 1
 * @s2: string number 2
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverses content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing
 */
void reverse_array(int *a, int n);

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * 
 */
char string_toupper(char *);
