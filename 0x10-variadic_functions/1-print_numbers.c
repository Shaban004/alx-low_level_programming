#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...);
/**
 * main - Entry point of the program.
 * Return: 0
 */
int main(void)
{
print_numbers(", ", 4, 0, 98, -1024, 402);
return (0);
}
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list numbers;
unsigned int i;
va_start(numbers, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(numbers, int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(numbers);
printf("\n");
}
