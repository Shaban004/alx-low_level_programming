#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of bytes from src to be used
 *
 * Return: pointer to concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (dest[i] != '\0')
i++;
j = 0;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
