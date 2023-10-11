#include <stdio.h>
#include "main.h"

/**
 * _abs - this is the master function
 *
 * @n: enable us to write a standard output
 *
 * Return: Always 0 (success)
 */

int _abs(int n)
{
if (n < 0)
{
return (-n);
}
else
{
return (n);
}
}
