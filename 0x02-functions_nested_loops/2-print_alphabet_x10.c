#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - this is the master function
 *
 * Description: enable us to write alphabet 10 times
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
char c;
int i = 0;

while (i <= 10)
{
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
}
_putchar('\n');
i++;
}
