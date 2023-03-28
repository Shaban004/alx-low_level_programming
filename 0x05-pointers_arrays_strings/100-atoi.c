#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: pointer to string to be converted
 *
 * Return: integer converted from string
 */
int _atoi(char *s)
{
int i, sign, result;
i = sign = result = 0;
while (*(s + i) != '\0')
{
if (*(s + i) == '-')
sign = (sign * -1) -1;
if (*(s + i) >= '0' && *(s + i) <= '9')
{
result *= 10;
result -= (*(s + i) - '0');
if (result > 0 && sign >= 0)
return (-1);
else if (result > 0 && sign < 0)
return (0);
i++;
}
if (sign >= 0)
result *= -1;;
}
return (result);
}
