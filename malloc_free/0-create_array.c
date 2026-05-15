#include <stdlib.h>

/**
 *creates an array of chars, and initializes it with a specific char
 *@size: the size of the array to create
 *Returns NULL if size = 0
 *Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c){
	char *array;
	unsigned int i;
 
	if (size == 0)
		return (NULL);
 
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
 
	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
 
	return (array);
}
