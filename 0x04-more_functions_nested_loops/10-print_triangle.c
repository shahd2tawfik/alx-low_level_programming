#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints the numbers from 1 to 100
 *
 * @size: count from 1 to 100 with Fizz Bizz FizzBuzz
 *
 * Return: 0 Always (success)
*/

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
{
	_putchar('\n');
}
	else
{
	for (i = 0; i < size; i++)
{
	for (j = 0; j < size - i - 1; j++)
{
	_putchar(' ');
}
	for (k = 0; k < i + 1; k++)
{
	_putchar('#');
}
	_putchar('\n');
}
}
}
