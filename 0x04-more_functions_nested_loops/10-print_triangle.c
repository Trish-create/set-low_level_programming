#include "main.h"

/**
 * print_triangle - prints a triangle using #
 * @size: size of the triangle
 *
 * Description: Prints a right-aligned triangle of size `size`.
 * If size <= 0, prints only a new line.
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		/* print spaces */
		for (j = 0; j < size - i; j++)
			_putchar(' ');

		/* print hashes */
		for (k = 0; k < i; k++)
			_putchar('#');

		_putchar('\n');
	}
}
