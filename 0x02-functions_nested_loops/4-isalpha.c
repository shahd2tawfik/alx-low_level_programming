#include <stdio.h>
#include "main.h"

/**
 * _isalpha - function to check if alphabet or not
 *
 * @c: character to check
 *
 * Return: if alphabet return 1 and 0 if not
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
