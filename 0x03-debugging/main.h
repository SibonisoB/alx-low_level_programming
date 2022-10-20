#ifdef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * positive_or_negative - test that correct output is received when given a case of zero
 */
void positive_or_negative(int i);

#endif /*MAIN_H*/

/**
 * largest_number - print largest of 3 integers
 * Return: 0
 */
int largest_number(int a, int b, int c);

/**
 * convert_day - converts day of month to day of year, without accounting for leap year
 * @month: month in number format
 * @day: day of month
 * Return: day of year
 */

int convert_day(int month, int day);

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @day: day of month
 * @month: month in number format
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year);
