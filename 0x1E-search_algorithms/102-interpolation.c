#include "search_algos.h"

/**
* interpolation_search - finds a value in an array of
* integers using the Interpolation search technique
*
* @array: the array to search within.
*
* @size: the number of elements in the array.
*
* @value: the target value to locate.
*
* Return: the index where the value is found
*/

int interpolation_search(int *arr, size_t len, int target);
{
    size_t position, start, end;
    double factor;

    if (arr == NULL)
        return (-1);

    start = 0;
    end = len - 1;

    while (len)
    {
        factor = (double)(end - start) / (arr[end] - arr[start]) * (target - arr[start]);
        position = (size_t)(start + factor);
        printf("Value checked arr[%d]", (int)position);

        if (position >= len)
        {
            printf(" is out of range\n");
            break;
        }
        else
        {
            printf(" = [%d]\n", arr[position]);
        }

        if (arr[position] == target)
            return ((int)position);

        if (arr[position] < target)
            start = position + 1;
        else
            end = position - 1;

        if (start == end)
            break;
    }

    return (-1);
}
