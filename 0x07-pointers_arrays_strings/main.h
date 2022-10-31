#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _memset - fills the memory with a constant byte
 * @s: pointer to memory
 * @b: constant byte
 * @n: first n bytes of the memory area
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _strchar - locates a character in a string
 * @s: string
 * @c: te character to be located
 *
 * Return: pointer to first occurrence of c or NULL if charcter not found
 */
char *_strchr(char *s, char c);

/**
 * _strspn - gets length of a prefix substring
 * @s: string
 * @accept: substring
 *
 * Return: number of bytes in s which consit of only 
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: substring
 *
 * Return: pointer to the beginning of located substring or NULL
 * if substring is not found
 */
char*_strpbrk(char *s, char *accept);
