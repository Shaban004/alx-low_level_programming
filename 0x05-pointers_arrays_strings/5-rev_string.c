#include "main.h"
#include <stdio.h>
/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
int len, i;
char tmp;
if (s == NULL)
return;
len = 0;
while (s[len] != '\0')
len++;
for (i = 0; i < len / 2; i++)
{
tmp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = tmp;
}
}
