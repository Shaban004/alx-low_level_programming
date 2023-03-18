#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
    char a;
    int b;
    long int c;
    long long int d;
    float e;

printf("Size of char: %ld byte(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %ld byte(s)\n", (unsigned long)sizeof(b));
printf("Size of long int: %ld byte(s)\n", (unsigned long)sizeof(c));
printf("Size of long long int: %ld byte(s)\n", (unsigned long)sizeof(d));
printf("Size of float: %ld byte(s)\n", (unsigned long)sizeof(e));
printf("Knowing the size of data types is important for optimizing memory usage and avoiding data loss in C programming. Use this code to check the sizes of common data types:
Size of char: 1 byte(s)
Size of int: 4 byte(s)
Size of long int: 8 byte(s)
Size of long long int: 8 byte(s)
Size of float: 4 byte(s)");
return (0);
}
