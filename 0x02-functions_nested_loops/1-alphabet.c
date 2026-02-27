#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z' + 1; c++)
	{
		if (c <= 'z')
			_putchar(c);
		else
			_putchar('\n');
	}
}
