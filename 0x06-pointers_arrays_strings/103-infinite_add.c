#include "main.h"
#include <stdio.h>
/**
 * infinite_add - Adds two numbers stored as strings
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store result
 * @size_r: Size of buffer
 *
 * Return: Pointer to result, or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, sum = 0, i, j;
while (n1[len1])
len1++;
while (n2[len2])
len2++;
if (len1 + 2 > size_r || len2 + 2 > size_r)
return (0);
i = len1 - 1;
j = len2 - 1;
r[size_r - 1] = '\0';
while (i >= 0 || j >= 0 || carry)
{
sum = carry;
if (i >= 0)
sum += n1[i--] - '0';
if (j >= 0)
sum += n2[j--] - '0';
if (size_r - 2 < 0)
return (0);
r[--size_r] = (sum % 10) + '0';
carry = sum / 10;
}
return (&r[size_r]);
}
