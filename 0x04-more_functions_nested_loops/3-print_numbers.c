#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	char *nums = "0123456789\n";

	while (*nums)
	{
		_putchar(*nums);
		nums++;
	}
}
