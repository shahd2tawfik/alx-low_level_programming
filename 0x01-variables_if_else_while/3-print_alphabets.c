#include <stdio.h>

/**
 * main - this is the master function
 *
 * Description: enable us to write a standard output
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	/*putchar() print a character*/
	char c;
	char x;

	c = 's';

	while (c <= 'V')
{
	putchar(c);
	c = c + 1;
}
	/*Upper case*/
	x = 'S';

	while (x <= 'V')
{
	putchar(x);
	x = x + 1;
}
	putchar('\n');
	return (0);
}
