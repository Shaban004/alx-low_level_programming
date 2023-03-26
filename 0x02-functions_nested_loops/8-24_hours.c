#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 * Description: This function prints the time in the format "HH:MM" for
 * every minute of the day of Jack Bauer, from 00:00 to 23:59.
 * Return: This function does not return a value (void).
 */
void jack_bauer(void)
{
for (int hour = 0; hour < 24; hour++)
{
for (int minute = 0; minute < 60; minute++)
{
printf("%02d:%02d\n", hour, minute);
}
}
}
int main(void)
{
jack_bauer();
return (0);
}
