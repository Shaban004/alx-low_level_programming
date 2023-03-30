#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @str: string to encode
 *
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
char *letter = "AEOTL";
char *leet_table = "43071";
int i, j;
for (i = 0; str[i]; i++)
{
for (j = 0; letter[j]; j++)
{
if (str[i] == letter[j] || str[i] == letter[j] + 32)
{
str[i] = leet_table[j];
break;
}
}
}
return (str);
}
