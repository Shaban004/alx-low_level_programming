#include "main.h"
/**
 * print_sign - Prints sign of a number
 * @n: The number in which it's sign is to be printed
 * Return: Return 1 if number is greater then zero ,-1 if number is a negative and 0 if anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
