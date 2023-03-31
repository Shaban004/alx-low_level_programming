#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Tests the functions in the 3-convert_day.c and
 * 3-print_remaining_days.c files by passing in a date.
 * This particular test is for a leap year: 02/29/2000.
 *
 * Return: Always 0
 */
int main(void)
{
int month = 2;
int day = 29;
int year = 2000;
int res;
printf("Date: %02d/%02d/%04d\n", month, day, year);
res = convert_day(month, day);
printf("Result: %d\n", res);
print_remaining_days(month, day, year);
return (0);
}
