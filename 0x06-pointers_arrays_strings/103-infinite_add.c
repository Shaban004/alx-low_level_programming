#include "main.h"
#include <stdio.h>
/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer where the result will be stored
 * @size_r: Size of the buffer
 * Returns: Pointer to the result or 0 if buffer is too small
 * Return: on success,returns a pointer to the result. Otherwise, returns NULL.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, sum = 0, i, j;
char *p;
/* Calculate the lengths of n1 and n2 */
while (n1[len1])
len1++;
while (n2[len2])
len2++;
/* Check if the buffer is too small */
if (len1 >= size_r || len2 >= size_r)
return (0);
/* Add the digits of n1 and n2, starting from the end */
i = len1 - 1;
j = len2 - 1;
r[size_r - 1] = '\0';
while (i >= 0 || j >= 0)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
carry = sum / 10;
r[size_r - 2] = sum % 10 + '0';
i--;
j--;
size_r--;
}
/* Handle any remaining carry */
if (carry)
{
if (size_r <= 1)
return (0);
r[size_r - 2] = carry + '0';
}
/* Remove leading zeros from the result */
p = r;
while (*p == '0' && *(p + 1) != '\0')
p++;
return (p);
}
