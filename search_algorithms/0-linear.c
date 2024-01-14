#include <stdio.h>

/**
 * linear_search - Searches for a value in an array using Linear search.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of 'value' in the array,
 * or -1 if 'value' is not present or if 'array' is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t n;

    if (array == NULL)
        return (-1);

    for (n = 0; n < size; n++)
    {
        printf("Value checked array[%lu] = [%d]\n", n, array[n]);

        if (array[n] == value)
            return (n);
    }

    return (-1);
}