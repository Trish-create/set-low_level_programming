#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments passed
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
