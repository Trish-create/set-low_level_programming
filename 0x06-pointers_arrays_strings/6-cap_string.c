#include <stddef.h>
#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to be modified
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *s)
{
	int i;

	if (!s)
		return (NULL);

	for (i = 0; s[i]; i++)
	{
		/* Capitalize the first character if it's lowercase */
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		/* Capitalize if previous character is a separator */
		else if ((s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
			  s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
			  s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
			  s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
			  s[i - 1] == '}') && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
	}

	return (s);
}
