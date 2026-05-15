#include <stdlib.h>

/**
 *_strdup-function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
 *Returns NULL if str = NULL
 *On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{       char *copy;
	unsigned int len;
	unsigned int i;
 
	if (str == NULL)
		return (NULL);
 
	len = 0;
	while (str[len] != '\0')
		len++;
 
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
 
	i = 0;
	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
 
	return (copy);
	}
