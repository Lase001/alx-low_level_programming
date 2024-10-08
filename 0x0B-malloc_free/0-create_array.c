#include "main.h"

/**
 * create_array - create an array of chars and initialze it
 * with a specific char
 * @size: size of array
 * @c: initial character
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (0);

	arr = malloc(sizeof(char) * size);
	if (!arr)
	{
		free(arr);
		return (0);
	}

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
