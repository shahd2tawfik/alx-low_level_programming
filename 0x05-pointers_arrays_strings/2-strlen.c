#include "main.h"

/**
* _strlen - a function that takes a pointer to an int
*
* @s: the input
*
* Return: nothing
*/

int _strlen(char *s)
{
	int length = 0;

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
