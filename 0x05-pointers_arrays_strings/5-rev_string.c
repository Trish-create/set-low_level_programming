#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 */
void rev_string(char *s)
{
    int i, j;
    char temp;

    /* Find the length of the string */
    for (i = 0; s[i] != '\0'; i++)
        ;

    /* Swap characters from both ends */
    for (j = 0; j < i / 2; j++)
    {
        temp = s[j];
        s[j] = s[i - j - 1];
        s[i - j - 1] = temp;
    }
}
