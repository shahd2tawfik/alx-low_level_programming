#include <stdio.h>
#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: Variable text
* Return: 1 if uppercase and 0 if lower
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}

}
