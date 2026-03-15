#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string to append
 * @n: maximum number of bytes to use from src
 *
 * Description: This function appends at most n bytes from the
 * src string to the end of dest. A terminating null byte is
 * added to the result.
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* Find the end of dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Append at most n bytes from src */
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
