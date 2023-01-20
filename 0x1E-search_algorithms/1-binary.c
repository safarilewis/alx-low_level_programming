#include "search_algos.h"

/**
 * binary_search - Implements a binary search algorithm
 * @array: Pointer to the first element of array to be searched
 * @size: Size of the array being searched
 * @value: Value being looked for in the array
 * Return: Index of the value
*/

int binary_search(int *array, size_t size, int value)
{
    int l = 0;
    int r = size - 1;
    int i;


    if (!array)
    {
        return -1;
    }
    
    while(l <= r)
    {
        printf("Searching in array: ");
        for (i = l; i < r; i++)
            printf("%d, ", array[i]);
        printf("%d", array[i]);
        printf("\n");
        int mid = l + (r - l)/2;

        if (*(array + mid) == value)
            return mid;

        if (*(array + mid) > value)
        {
            r = mid -1;
        }
        else if (*(array + mid) < value)
        {
            l = mid + 1;
        }
        else
        {
            return -1;
        }
        

    }
}