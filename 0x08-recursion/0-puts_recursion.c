#include "main.h"

/**
* _puts_recursion - a function that takes a pointer to an int
*
* @s: the input
*
* Return: nothing
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
}
