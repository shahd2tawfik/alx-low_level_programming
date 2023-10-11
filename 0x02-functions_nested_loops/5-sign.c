#include <stdio.h>
#include "main.h"

/**
 * print_sign - function to determine if number is positive or negative
 *
 * @n : enable us to write a standard output
 *
 * Return: return 1 if positive , 0 if zero , -1 if negative
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
