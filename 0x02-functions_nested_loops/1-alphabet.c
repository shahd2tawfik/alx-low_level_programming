#include <stdio.h>
#include "main.h"

/**
 * main - this is the master function
 *
 * Description: write alphabet in lower case
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char c;

c = 'a';

while (c <= 'z')
{
putchar(c);
c = c + 1;
}
putchar('\n');
return (0);
}
