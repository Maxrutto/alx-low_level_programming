#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: The pointer to the first element of the array
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: Returns the index of value if found or -1 on NULL
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
