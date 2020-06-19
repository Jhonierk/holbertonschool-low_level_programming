#include "holberton.h"

/**
 * print_triangle - Write a function that prints a triangle.
 * @size: take an int
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			k = size - i - 1;
			if (j < k)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
	_putchar('\n');
	}
}
