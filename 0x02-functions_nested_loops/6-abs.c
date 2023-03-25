#include "main.h"
/**
 * int _abs - Ptints the absolute val on an int
 * @n: It's the int to be checked
 * Rturn: Absolute val pf a number or zero
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
