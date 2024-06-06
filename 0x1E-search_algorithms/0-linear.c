#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"
#include <unistd.h>

/**
 * linear_search - performs a linear search for a value in an array.
 * @array: array to search.
 * @size: size of the array.
 * @value: value to find.
 * Return: index of the value, or -1 if not found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
