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
int c;

c = 'a';

while (c <= 'z')
{
_putchar(c);
c = c + 1;
};
_putchar('\n');
return (0);
}
