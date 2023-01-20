#include "search_algos.h"
/**
 * linear_search - Implements a linear search algorithm
 * @array: Pointer to first element of array
 * @size: Number of elements in array
 * @value: Value being searched for in the array
 * Return: Index of the value found
 */

int linear_search(int *array, size_t size, int value)
{
    unsigned int i;
    if (!array)
        return (-1);
    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }
    return (-1);
}
