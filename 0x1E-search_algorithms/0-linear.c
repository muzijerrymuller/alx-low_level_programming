#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"
#include <unistd.h>

/**
 * linear_search - performs a linear search for a value in an array.
 * @array: array to search.
 * @size: size of the array.
 * @value: value to find.
 *
 * Return: index of the value, or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t inc;

	if (array == NULL)
		return (-1);
	for (inc = 0; inc < size; inc++)
	{
		printf("Value checked array[%ld] = [%d]\n", inc, array[inc]);
		if (array[inc] == value)
			return (inc);
	}
	return (-1);
}
