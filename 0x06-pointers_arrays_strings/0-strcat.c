#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string to append
 *
 * Description: This function appends the src string to the end
 * of dest, overwriting the terminating null byte at the end of
 * dest and adding a new terminating null byte.
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* Find the end of dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Append src to dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add null terminator */
	dest[i] = '\0';

	return (dest);
}
