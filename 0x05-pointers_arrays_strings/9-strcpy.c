#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src
 *           including the terminating null byte (\0)
 *           to the buffer pointed to by dest.
 * @dest: The buffer where the string will be copied
 * @src: The source string to copy
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    int i;

    /* Copy each character from src to dest, including '\0' */
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    /* Copy the terminating null byte */
    dest[i] = '\0';

    return (dest);
}
