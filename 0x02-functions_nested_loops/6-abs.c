#include "main.h"
/**
 * _abs - Prints the absolute val on an int
 * @c: It's the int to be checked
 * Return: Absolute val pf a number or zero
 */
int _abs(int c)
{
if (c < 0)
{
int abs_val;
abs_val = c *= -1;
return (abs_val);
}
return (c);
}
